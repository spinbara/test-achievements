using Oxide.Core.Plugins;
using Oxide.Core;

namespace Oxide.Plugins
{
    [Info("ExampleHurtworldPlugin", "TwojeImie", "1.0.0")]
    [Description("Prosty plugin do Hurtworld z komendami /greet i /tpa")]
    public class ExampleHurtworldPlugin : HurtworldPlugin
    {
        [ChatCommand("greet")]
        void GreetCommand(PlayerSession session, string command, string[] args)
        {
            Hurtworld.Players.Player p = session.WorldPlayerEntity;
            PrintToChat(session, $"Witaj {p.Name} w Hurtworld!");
        }

        [ChatCommand("tpa")]
        void TeleportCommand(PlayerSession session, string command, string[] args)
        {
            if (args.Length == 1)
            {
                string targetName = args[0];
                var target = GameManager.Instance.GetSessionByName(targetName);
                if (target != null)
                {
                    session.WorldPlayerEntity.TeleportTo(target.WorldPlayerEntity.transform.position);
                    PrintToChat(session, $"Teleportowano do {targetName}!");
                }
                else
                {
                    PrintToChat(session, "Nie znaleziono gracza.");
                }
            }
            else
            {
                PrintToChat(session, "Użycie: /tpa <gracz>");
            }
        }
    }
}

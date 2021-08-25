#include <stdio.h>
#include <tgbot/tgbot.h>

int main() {
    bot("1899124713:AAEjk2FGPSXxwuJDBdSBy_Mb3Y0KDD5YTc0");
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, "Salam test edirem!");
    });

    return 0;
}

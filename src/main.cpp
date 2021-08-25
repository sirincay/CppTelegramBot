#include <stdio.h>
#include <tgbot/tgbot.h>

int main() {
    bot("1899124713:AAEjk2FGPSXxwuJDBdSBy_Mb3Y0KDD5YTc0");
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, "Salam test edirem!");
    });

   
    
    // catch (TgBot::TgException& e) {
    // printf("error: %s\n", e.what()); Error: xətaları görmək istəsən aktifləşdir
    // }
    
    return 0;
}

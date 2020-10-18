/*
 *  fr.h - French Language header file
 *  Written by Berki Yenig�n.
 */

#define FR 1

#if LANGUAGE == FR
   #define STRING_CANNOT_COPY "impossible de copier %s.\r\n"
   #define STRING_CANNOT_CREATE "impossible de cr�er %s.\r\n"
   #define STRING_CANNOT_MOVE "impossible de d�placer %s.\r\n"
   #define STRING_CANNOT_REMOVE "impossible d\'enlever %s.\r\n"
   #define STRING_DOES_NOT_DIRECTORY "%s n\'est pas un r�pertoire.\r\n"
   #define STRING_INVALID_SYNTAX "Syntaxe invalide."
   #define STRING_MINIBOX_BEEP_DESCRIPTION "MINIBOX beep - �mettre un son depuis le haut-parleur du PC."
   #define STRING_MINIBOX_BEEP_OPTIONS_1 "  -f <Fr�quence> : Sp�cifier la fr�quence du son."
   #define STRING_MINIBOX_BEEP_OPTIONS_2 "  -l <Dur�e> : Dur�e du son en millisecondes."
   #define STRING_MINIBOX_BEEP_USAGE "  MINIBOX beep [Options]"
   #define STRING_MINIBOX_CAT_DESCRIPTION  "MINIBOX cat - Afficher le contenu du fichier sp�cifi�."
   #define STRING_MINIBOX_CAT_OPTIONS_1 "  -E: Les fins sont indiqu�es par \"$\"."
   #define STRING_MINIBOX_CAT_OPTIONS_2 "  -T: Les tabulations sont indiqu�es par \"^I\"."
   #define STRING_MINIBOX_CAT_USAGE "  MINIBOX cat [Options] <Fichier>"
   #define STRING_MINIBOX_CLEAR_DESCRIPTION "MINIBOX clear - Effacer l\'�cran du terminal."
   #define STRING_MINIBOX_CP_USAGE "  MINIBOX cp <Source> <Destination>"
   #define STRING_MINIBOX_CP_DESCRIPTION "MINIBOX cp - Copier le fichier ou dossier sp�cifi� vers le dossier sp�cifi�."
   #define STRING_MINIBOX_COMMANDS "Commandes Minibox :\r\n"
   #define STRING_MINIBOX_DATE_DESCRIPTION "MINIBOX date - Afficher ou d�finir la date et l\'heure du syst�me."
   #define STRING_MINIBOX_DATE_OPTIONS_1 "-s       D�finir l\'heure et la date du syst�me."
   #define STRING_MINIBOX_DATE_OPTIONS_2 "<Format> Sp�cifier la cha�ne de sortie format�e. Le format est de type C printf."
   #define STRING_MINIBOX_DATE_OPTIONS_3 "         Exemple : \"%d-%d-%d %d:%d%:%d\""
   #define STRING_MINIBOX_DATE_OPTIONS_4 "         Le format par d�faut est de type ISO."
   #define STRING_MINIBOX_DATE_USAGE "  MINIBOX date [-s] [Format]"
   #define STRING_MINIBOX_DESCRIPTION "MINIBOX - Commandes GNU/Linux sous DOS"
   #define STRING_MINIBOX_ECHO_DESCRIPTION "MINIBOX echo - Afficher les messages sp�cifi�s."
   #define STRING_MINIBOX_ECHO_OPTIONS_1 "-e  Affiche des caract�res sp�ciaux. Le message doit �tre entre guillemets."
   #define STRING_MINIBOX_ECHO_OPTIONS_2 "    Les caract�res sont : \\a \\b \\c \\e \\f \\r \\t \\v"
   #define STRING_MINIBOX_ECHO_OPTIONS_3 "-n  En outre, imprime le caract�re de nouvelle ligne."
   #define STRING_MINIBOX_ECHO_USAGE "  MINIBOX echo [Options] <Messages>"
   #define STRING_MINIBOX_LS_DESCRIPTION "MINIBOX ls - Lister les contenus d\'un r�pertoire."
   #define STRING_MINIBOX_LS_OPTIONS_1 "-1  Afficher la sortie en une seule colonne."
   #define STRING_MINIBOX_LS_OPTIONS_2 "-a  Ne pas ignorer \".\" et \"..\"."
   #define STRING_MINIBOX_LS_OPTIONS_3 "-l  Afficher le format de liste longue."
   #define STRING_MINIBOX_LS_USAGE "  MINIBOX ls [Options] [Fichier]"
   #define STRING_MINIBOX_MKDIR_DESCRIPTION "MINIBOX mkdir - Cr�er les r�pertoires sp�cifi�s."
   #define STRING_MINIBOX_MKDIR_USAGE "  MINIBOX mkdir <R�pertoires>"
   #define STRING_MINIBOX_MV_DESCRIPTION_1 "MINIBOX mv - Renommer et/ou d�placer le fichier"
   #define STRING_MINIBOX_MV_DESCRIPTION_2 "ou r�pertoire vers le r�pertoire sp�cifi�."
   #define STRING_MINIBOX_MV_USAGE "  MINIBOX mv Source Destination"
   #define STRING_MINIBOX_PWD_DESCRIPTION "MINIBOX pwd - Afficher le nom du r�pertoire actuel."
   #define STRING_MINIBOX_RM_DESCRIPTION "MINIBOX rm - Effacer les fichiers sp�cifi�s."
   #define STRING_MINIBOX_RM_OPTION "-r  Effacer les r�pertoires sp�cifi�s et leur contenu r�cursivement."
   #define STRING_MINIBOX_RM_USAGE "  MINIBOX rm [-r] <�l�ments>"
   #define STRING_MINIBOX_RMDIR_DESCRIPTION "MINIBOX rmdir - Effacer les r�pertoires sp�cifi�s."
   #define STRING_MINIBOX_RMDIR_USAGE "  MINIBOX rmdir <R�pertoires>"
   #define STRING_MINIBOX_SH_DESCRIPTION "MINIBOX sh - Shell Minibox"
   #define STRING_MINIBOX_SH_EXIT "  Dans le shell Minibox, tapez la commande \"exit\" pour le quitter."
   #define STRING_MINIBOX_TIME_DESCRIPTION "MINIBOX time - Mesurer la dur�e d\'ex�cution d\'une commande en secondes."
   #define STRING_MINIBOX_TIME_USAGE "  MINIBOX time <Commande> [Argument]"
   #define STRING_MINIBOX_USAGE "  MINIBOX <Commande> [Arguments]"
   #define STRING_MINIBOX_VERSION "Minibox version : 0.6"
   #define STRING_NO_ENOUGH_ARGUMENTS "Pas assez d\'arguments."
   #define STRING_NOTE "Note :"
   #define STRING_OPTION "Option :"
   #define STRING_OPTIONS "Options :"
   #define STRING_TOO_MUCH_ARGUMENTS "Trop d\'arguments."
#endif
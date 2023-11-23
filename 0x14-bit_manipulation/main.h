{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x14-bit_manipulation":{"items":[{"name":"0-binary_to_uint.c","path":"0x14-bit_manipulation/0-binary_to_uint.c","contentType":"file"},{"name":"0-main.c","path":"0x14-bit_manipulation/0-main.c","contentType":"file"},{"name":"1-main.c","path":"0x14-bit_manipulation/1-main.c","contentType":"file"},{"name":"1-print_binary.c","path":"0x14-bit_manipulation/1-print_binary.c","contentType":"file"},{"name":"100-get_endianness.c","path":"0x14-bit_manipulation/100-get_endianness.c","contentType":"file"},{"name":"100-main.c","path":"0x14-bit_manipulation/100-main.c","contentType":"file"},{"name":"101-password","path":"0x14-bit_manipulation/101-password","contentType":"file"},{"name":"2-get_bit.c","path":"0x14-bit_manipulation/2-get_bit.c","contentType":"file"},{"name":"2-main.c","path":"0x14-bit_manipulation/2-main.c","contentType":"file"},{"name":"3-main.c","path":"0x14-bit_manipulation/3-main.c","contentType":"file"},{"name":"3-set_bit.c","path":"0x14-bit_manipulation/3-set_bit.c","contentType":"file"},{"name":"4-clear_bit.c","path":"0x14-bit_manipulation/4-clear_bit.c","contentType":"file"},{"name":"4-main.c","path":"0x14-bit_manipulation/4-main.c","contentType":"file"},{"name":"5-flip_bits.c","path":"0x14-bit_manipulation/5-flip_bits.c","contentType":"file"},{"name":"5-main.c","path":"0x14-bit_manipulation/5-main.c","contentType":"file"},{"name":"README.md","path":"0x14-bit_manipulation/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x14-bit_manipulation/_putchar.c","contentType":"file"},{"name":"crackme3","path":"0x14-bit_manipulation/crackme3","contentType":"file"},{"name":"main.h","path":"0x14-bit_manipulation/main.h","contentType":"file"}],"totalCount":19},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":24}},"fileTreeProcessingTime":5.417481,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":665980539,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"AlaaMahmoud112003","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-07-13T12:36:10.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/137706424?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1689253361.0","canEdit":false,"refType":"branch","currentOid":"7118eea7ebdc255463afb2c787b173f149ce47e2"},"path":"0x14-bit_manipulation/main.h","currentUser":null,"blob":{"rawLines":["#ifndef MAIN_H","#define MAIN_H","","#include <stdio.h>","#include <limits.h>","","unsigned long int _power(unsigned int base, unsigned int pow);","unsigned int binary_to_uint(const char *b);","void print_binary(unsigned long int n);","int get_bit(unsigned long int n, unsigned int index);","int set_bit(unsigned long int *n, unsigned int index);","int clear_bit(unsigned long int *n, unsigned int index);","unsigned int flip_bits(unsigned long int n, unsigned long int m);","int get_endianness(void);","int _putchar(char c);","","#endif"],"stylingDirectives":[[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-c1"}],[],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[],[{"start":0,"end":17,"cssClass":"pl-smi"},{"start":14,"end":17,"cssClass":"pl-smi"},{"start":18,"end":24,"cssClass":"pl-en"},{"start":25,"end":37,"cssClass":"pl-smi"},{"start":34,"end":37,"cssClass":"pl-smi"},{"start":38,"end":42,"cssClass":"pl-s1"},{"start":44,"end":56,"cssClass":"pl-smi"},{"start":53,"end":56,"cssClass":"pl-smi"},{"start":57,"end":60,"cssClass":"pl-s1"}],[{"start":0,"end":12,"cssClass":"pl-smi"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":27,"cssClass":"pl-en"},{"start":28,"end":33,"cssClass":"pl-k"},{"start":34,"end":38,"cssClass":"pl-smi"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":40,"end":41,"cssClass":"pl-s1"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":17,"cssClass":"pl-en"},{"start":18,"end":35,"cssClass":"pl-smi"},{"start":32,"end":35,"cssClass":"pl-smi"},{"start":36,"end":37,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":11,"cssClass":"pl-en"},{"start":12,"end":29,"cssClass":"pl-smi"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-s1"},{"start":33,"end":45,"cssClass":"pl-smi"},{"start":42,"end":45,"cssClass":"pl-smi"},{"start":46,"end":51,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":11,"cssClass":"pl-en"},{"start":12,"end":29,"cssClass":"pl-smi"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":32,"cssClass":"pl-s1"},{"start":34,"end":46,"cssClass":"pl-smi"},{"start":43,"end":46,"cssClass":"pl-smi"},{"start":47,"end":52,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":13,"cssClass":"pl-en"},{"start":14,"end":31,"cssClass":"pl-smi"},{"start":28,"end":31,"cssClass":"pl-smi"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":33,"end":34,"cssClass":"pl-s1"},{"start":36,"end":48,"cssClass":"pl-smi"},{"start":45,"end":48,"cssClass":"pl-smi"},{"start":49,"end":54,"cssClass":"pl-s1"}],[{"start":0,"end":12,"cssClass":"pl-smi"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":22,"cssClass":"pl-en"},{"start":23,"end":40,"cssClass":"pl-smi"},{"start":37,"end":40,"cssClass":"pl-smi"},{"start":41,"end":42,"cssClass":"pl-s1"},{"start":44,"end":61,"cssClass":"pl-smi"},{"start":58,"end":61,"cssClass":"pl-smi"},{"start":62,"end":63,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":18,"cssClass":"pl-en"},{"start":19,"end":23,"cssClass":"pl-smi"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":17,"cssClass":"pl-smi"},{"start":18,"end":19,"cssClass":"pl-s1"}],[],[{"start":0,"end":6,"cssClass":"pl-k"}]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/AlaaMahmoud112003/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/AlaaMahmoud112003/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/AlaaMahmoud112003/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"main.h","displayUrl":"https://github.com/AlaaMahmoud112003/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h?raw=true","headerInfo":{"blobSize":"506 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"27f6f45","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FAlaaMahmoud112003%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x14-bit_manipulation%2Fmain.h","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"17","truncatedSloc":"14"},"mode":"executable file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/AlaaMahmoud112003/alx-low_level_programming/discussions/new","newIssuePath":"/AlaaMahmoud112003/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/AlaaMahmoud112003/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/AlaaMahmoud112003/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/AlaaMahmoud112003/alx-low_level_programming/raw/master/0x14-bit_manipulation/main.h","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"AlaaMahmoud112003","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"MAIN_H","kind":"macro","identStart":23,"identEnd":29,"extentStart":15,"extentEnd":31,"fullyQualifiedName":"MAIN_H","identUtf16":{"start":{"lineNumber":1,"utf16Col":8},"end":{"lineNumber":1,"utf16Col":14}},"extentUtf16":{"start":{"lineNumber":1,"utf16Col":0},"end":{"lineNumber":3,"utf16Col":0}}},{"name":"_power","kind":"function","identStart":89,"identEnd":95,"extentStart":89,"extentEnd":132,"fullyQualifiedName":"_power","identUtf16":{"start":{"lineNumber":6,"utf16Col":18},"end":{"lineNumber":6,"utf16Col":24}},"extentUtf16":{"start":{"lineNumber":6,"utf16Col":18},"end":{"lineNumber":6,"utf16Col":61}}},{"name":"binary_to_uint","kind":"function","identStart":147,"identEnd":161,"extentStart":147,"extentEnd":176,"fullyQualifiedName":"binary_to_uint","identUtf16":{"start":{"lineNumber":7,"utf16Col":13},"end":{"lineNumber":7,"utf16Col":27}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":13},"end":{"lineNumber":7,"utf16Col":42}}},{"name":"print_binary","kind":"function","identStart":183,"identEnd":195,"extentStart":183,"extentEnd":216,"fullyQualifiedName":"print_binary","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":17}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":38}}},{"name":"get_bit","kind":"function","identStart":222,"identEnd":229,"extentStart":222,"extentEnd":270,"fullyQualifiedName":"get_bit","identUtf16":{"start":{"lineNumber":9,"utf16Col":4},"end":{"lineNumber":9,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":9,"utf16Col":4},"end":{"lineNumber":9,"utf16Col":52}}},{"name":"set_bit","kind":"function","identStart":276,"identEnd":283,"extentStart":276,"extentEnd":325,"fullyQualifiedName":"set_bit","identUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":53}}},{"name":"clear_bit","kind":"function","identStart":331,"identEnd":340,"extentStart":331,"extentEnd":382,"fullyQualifiedName":"clear_bit","identUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":13}},"extentUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":55}}},{"name":"flip_bits","kind":"function","identStart":397,"identEnd":406,"extentStart":397,"extentEnd":448,"fullyQualifiedName":"flip_bits","identUtf16":{"start":{"lineNumber":12,"utf16Col":13},"end":{"lineNumber":12,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":12,"utf16Col":13},"end":{"lineNumber":12,"utf16Col":64}}},{"name":"get_endianness","kind":"function","identStart":454,"identEnd":468,"extentStart":454,"extentEnd":474,"fullyQualifiedName":"get_endianness","identUtf16":{"start":{"lineNumber":13,"utf16Col":4},"end":{"lineNumber":13,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":13,"utf16Col":4},"end":{"lineNumber":13,"utf16Col":24}}},{"name":"_putchar","kind":"function","identStart":480,"identEnd":488,"extentStart":480,"extentEnd":496,"fullyQualifiedName":"_putchar","identUtf16":{"start":{"lineNumber":14,"utf16Col":4},"end":{"lineNumber":14,"utf16Col":12}},"extentUtf16":{"start":{"lineNumber":14,"utf16Col":4},"end":{"lineNumber":14,"utf16Col":20}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/AlaaMahmoud112003/alx-low_level_programming/branches":{"post":"pqAHxU92suSmmZzXHInL3GU4LFIXSzsRxF7mJ8P51HbD2ZIwkb6SwOStFILbU5_a2SQuU4wcjh3gX4EOo8qj4w"},"/repos/preferences":{"post":"zqgq3P3aSg5BAKib1w8dKqyhF7vm8X6rbzH_RUCSd8JrdLA47Bg7ZBrsBAFECdvLgQWYU3wVjhTmHoTw11XG2g"}}},"title":"alx-low_level_programming/0x14-bit_manipulation/main.h at master · AlaaMahmoud112003/alx-low_level_programming"}
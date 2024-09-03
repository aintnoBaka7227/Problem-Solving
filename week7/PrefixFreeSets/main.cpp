#include "PrefixFreeSets.hpp"

int main() {
    PrefixFreeSets test;
    std::vector<std::string> words = {
        "svvdxggvhraktqqkkfl", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsogvobw", "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldp", 
        "xgejpsemtuhshxpziqviiqs", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsogvobw", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsogvobw", 
        "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekf", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsog", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsogvobw", 
        "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldn", "eblhpwsvbgjskhfdsqmdsxxhupcydgroae", "eonijaazhtdnvwryvjdcndteoeqxncqhddqofzcus", 
        "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldp", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfsc", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfsc", 
        "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldp", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldn", 
        "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfscd", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxd", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsogvobw", "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldp", 
        "hfolqqhfvrfzdgsuuni", "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdldn", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", 
        "fynrfcnxfjmqswmbwmznfzvaeocdozyorbfvcrguygztojdld", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfscd", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxd", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvb", "axcm", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvs", "anlecahk", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfscd", 
        "eonijaazhtdnvwryvjdcndteoeqxncqhddqofzc", "eonijaazhtdnv", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxdr", "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvso", 
        "anlecahkrizwtqobdnycxeocojpumjfqtmpavuanhwvsjvbxd", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfscg", 
        "eonijaazhtdnvcwamgwulzwwuoypkqxaxzuttvbvsot", "eonijaazhtdnvwryvjdcndteoeqxncqhddq", 
        "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibes", "hfolqqhfvrfzdgsuuniyakyrottbfgtouxbfcibesuoqekfscd", 
        "eonijaazhtdnvpwxyeaprmzuscqdqjvs", "eonijaazhtdn", "fynrfcnxfjmqswmbwmznfzvae"
    };
    std::cout << test.maxElements(words) << std::endl;
    // std::cout << test.maxElements({"hello","hi","h","run","rerun","running"}) << std::endl;
    return 0;
}
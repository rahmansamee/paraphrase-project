#include "synonyms.h"

Synonyms dictionary[] = {
    // ===== 150 NOUNS =====
    {"apple", {"fruit", "pomme", "red fruit", "orchard fruit", "macintosh"}, 5},
    {"book", {"novel", "tome", "volume", "publication", "text"}, 5},
    {"car", {"automobile", "vehicle", "sedan", "wheels", "ride"}, 5},
    {"dog", {"canine", "pooch", "hound", "mutt", "puppy"}, 5},
    {"eye", {"optic", "peeper", "orb", "oculus", "eyeball"}, 5},
    {"friend", {"pal", "buddy", "companion", "homie", "confidant"}, 5},
    {"house", {"home", "residence", "dwelling", "abode", "domicile"}, 5},
    {"job", {"work", "occupation", "profession", "career", "gig"}, 5},
    {"king", {"monarch", "ruler", "sovereign", "crown", "regent"}, 5},
    {"love", {"affection", "adoration", "passion", "devotion", "fondness"}, 5},

    // === PEOPLE & RELATIONSHIPS ===
    {"person", {"individual", "human", "being", "soul", "mortal"}, 5},
    {"friend", {"companion", "pal", "buddy", "confidant", "ally"}, 5},
    {"teacher", {"educator", "instructor", "mentor", "tutor", "professor"}, 5},
    {"child", {"kid", "youngster", "minor", "juvenile", "toddler"}, 5},
    {"leader", {"chief", "boss", "director", "commander", "head"}, 5},

    // === BODY PARTS ===
    {"hand", {"palm", "appendage", "extremity", "grasper", "mitt"}, 5},
    {"eye", {"optic", "peeper", "orb", "oculus", "eyeball"}, 5},
    {"heart", {"cardiac", "ticker", "pumper", "core", "center"}, 5},
    {"foot", {"paw", "hoof", "trotter", "tootsie", "pedal extremity"}, 5},
    {"mouth", {"oral cavity", "maw", "jaws", "piehole", "yap"}, 5},

    // === ANIMALS ===
    {"dog", {"canine", "pooch", "hound", "mutt", "puppy"}, 5},
    {"cat", {"feline", "kitty", "tabby", "tomcat", "mouser"}, 5},
    {"bird", {"avian", "fowl", "songbird", "raptor", "feathered friend"}, 5},
    {"fish", {"aquatic creature", "finfish", "seafood", "swimmer", "scaley"}, 5},
    {"horse", {"equine", "steed", "mare", "stallion", "pony"}, 5},

    // === FOOD & DRINK ===
    {"apple", {"pome", "fruit", "orchard produce", "pippin", "macintosh"}, 5},
    {"bread", {"loaf", "baked goods", "staff of life", "baguette", "sourdough"}, 5},
    {"water", {"H2O", "aqua", "liquid", "hydration", "Adam's ale"}, 5},
    {"meat", {"flesh", "protein", "viand", "butcher's cut", "carcass"}, 5},
    {"soup", {"broth", "bisque", "potage", "concoction", "stew"}, 5},

    // === HOUSEHOLD ITEMS ===
    {"chair", {"seat", "furniture", "recliner", "throne", "perch"}, 5},
    {"bed", {"cot", "mattress", "bunk", "berth", "sleeping quarters"}, 5},
    {"knife", {"blade", "cutter", "shiv", "dagger", "carving tool"}, 5},
    {"lamp", {"light", "torchère", "illuminator", "fixture", "beacon"}, 5},
    {"clock", {"timepiece", "chronometer", "ticker", "horologe", "watch"}, 5},

    // === NATURE ===
    {"tree", {"sapling", "arbor", "timber", "forest giant", "woody plant"}, 5},
    {"flower", {"blossom", "bloom", "petaled plant", "floret", "posy"}, 5},
    {"river", {"stream", "waterway", "brook", "creek", "tributary"}, 5},
    {"mountain", {"peak", "summit", "alp", "elevation", "prominence"}, 5},
    {"cloud", {"vapor", "cumulus", "nimbus", "fog bank", "sky puff"}, 5},

    // === TECHNOLOGY ===
    {"computer", {"PC", "workstation", "terminal", "processor", "thinking machine"}, 5},
    {"phone", {"cell", "mobile", "smartphone", "handset", "communicator"}, 5},
    {"car", {"automobile", "vehicle", "sedan", "wheels", "ride"}, 5},
    {"book", {"tome", "volume", "publication", "novel", "text"}, 5},
    {"key", {"lock opener", "passkey", "skeleton key", "fob", "cipher"}, 5},

    // === CLOTHING ===
    {"shirt", {"blouse", "top", "tee", "button-down", "polo"}, 5},
    {"hat", {"cap", "headgear", "chapeau", "lid", "bonnet"}, 5},
    {"shoe", {"footwear", "sneaker", "loafer", "oxford", "boot"}, 5},
    {"pants", {"trousers", "slacks", "jeans", "britches", "khakis"}, 5},
    {"coat", {"jacket", "overcoat", "parka", "windbreaker", "anorak"}, 5},

    // === PLACES ===
    {"city", {"metropolis", "urban center", "municipality", "town", "burg"}, 5},
    {"park", {"green space", "playground", "garden", "commons", "recreation area"}, 5},
    {"school", {"academy", "institution", "learning center", "college", "university"}, 5},
    {"store", {"shop", "market", "boutique", "emporium", "retail outlet"}, 5},
    {"home", {"residence", "dwelling", "abode", "domicile", "household"}, 5},

    // === ABSTRACT CONCEPTS ===
    {"love", {"affection", "adoration", "passion", "devotion", "fondness"}, 5},
    {"time", {"duration", "period", "epoch", "era", "moment"}, 5},
    {"work", {"labor", "employment", "occupation", "job", "task"}, 5},
    {"life", {"existence", "being", "animation", "vitality", "sentience"}, 5},
    {"art", {"creativity", "expression", "craft", "fine art", "masterpiece"}, 5},

    // ===== 100 ADJECTIVES =====
    {"happy", {"joyful", "cheerful", "content", "delighted", "gleeful"}, 5},
    {"sad", {"unhappy", "sorrowful", "depressed", "melancholy", "blue"}, 5},
    {"fast", {"quick", "rapid", "swift", "speedy", "brisk"}, 5},
    {"slow", {"sluggish", "leisurely", "gradual", "unhurried", "poky"}, 5},
    {"big", {"large", "huge", "enormous", "gigantic", "massive"}, 5},
    {"small", {"tiny", "little", "minuscule", "petite", "compact"}, 5},
    {"bright", {"shiny", "luminous", "radiant", "vivid", "glowing"}, 5},
    {"dark", {"dim", "shadowy", "murky", "gloomy", "unlit"}, 5},
    {"hot", {"warm", "scorching", "blazing", "sizzling", "fiery"}, 5},
    {"cold", {"chilly", "freezing", "frigid", "icy", "frosty"}, 5},

    // === SIZE & QUANTITY ===
    {"big", {"large", "huge", "enormous", "gigantic", "massive"}, 5},
    {"small", {"tiny", "little", "miniature", "compact", "petite"}, 5},
    {"wide", {"broad", "expansive", "spacious", "extensive", "roomy"}, 5},
    {"narrow", {"slim", "thin", "tight", "constricted", "slender"}, 5},
    {"heavy", {"weighty", "bulky", "hefty", "substantial", "ponderous"}, 5},

    // === SHAPE & TEXTURE ===
    {"round", {"circular", "spherical", "curved", "globular", "oval"}, 5},
    {"sharp", {"pointed", "keen", "edged", "piercing", "jagged"}, 5},
    {"smooth", {"even", "polished", "sleek", "silky", "glossy"}, 5},
    {"rough", {"coarse", "bumpy", "uneven", "jagged", "rugged"}, 5},
    {"soft", {"cushiony", "plush", "tender", "malleable", "downy"}, 5},

    // === COLOR & APPEARANCE ===
    {"red", {"crimson", "scarlet", "ruby", "cherry", "vermilion"}, 5},
    {"blue", {"azure", "cobalt", "sapphire", "navy", "cerulean"}, 5},
    {"bright", {"vibrant", "radiant", "luminous", "glowing", "dazzling"}, 5},
    {"dark", {"dim", "shadowy", "murky", "obscure", "unlit"}, 5},
    {"colorful", {"vibrant", "multicolored", "variegated", "kaleidoscopic", "rainbow"}, 5},

    // === PERSONALITY & EMOTION ===
    {"happy", {"joyful", "cheerful", "content", "delighted", "gleeful"}, 5},
    {"sad", {"unhappy", "sorrowful", "melancholy", "depressed", "gloomy"}, 5},
    {"brave", {"courageous", "bold", "fearless", "valiant", "heroic"}, 5},
    {"kind", {"compassionate", "benevolent", "considerate", "gentle", "thoughtful"}, 5},
    {"angry", {"furious", "irate", "enraged", "livid", "wrathful"}, 5},

    // === SPEED & TEMPERATURE ===
    {"fast", {"quick", "rapid", "swift", "speedy", "brisk"}, 5},
    {"slow", {"sluggish", "leisurely", "gradual", "unhurried", "plodding"}, 5},
    {"hot", {"scorching", "blazing", "sizzling", "sweltering", "torrid"}, 5},
    {"cold", {"freezing", "frigid", "frosty", "chilly", "icy"}, 5},
    {"warm", {"tepid", "lukewarm", "temperate", "balmy", "mild"}, 5},

    // === SOUND & LIGHT ===
    {"loud", {"noisy", "deafening", "thunderous", "booming", "raucous"}, 5},
    {"quiet", {"silent", "hushed", "muted", "soft", "peaceful"}, 5},
    {"shiny", {"glossy", "lustrous", "gleaming", "polished", "glistening"}, 5},
    {"dull", {"matte", "lackluster", "flat", "dim", "unpolished"}, 5},
    {"clear", {"transparent", "translucent", "limpid", "crystalline", "see-through"}, 5},

    // === TASTE & SMELL ===
    {"sweet", {"sugary", "honeyed", "saccharine", "candy-like", "delicious"}, 5},
    {"sour", {"tart", "acidic", "vinegary", "tangy", "acerbic"}, 5},
    {"bitter", {"acrid", "sharp", "unpleasant", "harsh", "biting"}, 5},
    {"salty", {"briny", "salted", "savory", "flavored", "seasoned"}, 5},
    {"spicy", {"pungent", "peppery", "hot", "zesty", "fiery"}, 5},

    // === AGE & CONDITION ===
    {"new", {"fresh", "recent", "modern", "unused", "brand-new"}, 5},
    {"old", {"aged", "ancient", "vintage", "antique", "timeworn"}, 5},
    {"clean", {"spotless", "immaculate", "pristine", "sanitized", "unsoiled"}, 5},
    {"dirty", {"filthy", "grimy", "soiled", "stained", "muddy"}, 5},
    {"broken", {"damaged", "fractured", "shattered", "cracked", "faulty"}, 5},

    // === VALUE & QUALITY ===
    {"good", {"excellent", "superb", "fine", "splendid", "outstanding"}, 5},
    {"bad", {"poor", "awful", "terrible", "lousy", "inferior"}, 5},
    {"important", {"significant", "crucial", "vital", "essential", "paramount"}, 5},
    {"simple", {"easy", "basic", "straightforward", "uncomplicated", "elementary"}, 5},
    {"difficult", {"hard", "challenging", "tough", "arduous", "demanding"}, 5},

    // === QUANTITY & FREQUENCY ===
    {"many", {"numerous", "countless", "abundant", "plentiful", "copious"}, 5},
    {"few", {"scant", "sparse", "limited", "scarce", "meager"}, 5},
    {"full", {"filled", "packed", "loaded", "brimming", "stuffed"}, 5},
    {"empty", {"vacant", "void", "hollow", "bare", "deserted"}, 5},
    {"frequent", {"regular", "repeated", "constant", "persistent", "continual"}, 5},

    // === PHYSICAL STATES ===
    {"strong", {"powerful", "muscular", "sturdy", "robust", "mighty"}, 5},
    {"weak", {"feeble", "frail", "delicate", "fragile", "powerless"}, 5},
    {"healthy", {"fit", "hearty", "vigorous", "sound", "hale"}, 5},
    {"sick", {"ill", "unwell", "ailing", "poorly", "nauseous"}, 5},
    {"tired", {"weary", "exhausted", "fatigued", "drained", "spent"}, 5},

    // === TEXTURE & MATERIALS ===
    {"fuzzy", {"furry", "downy", "fluffy", "velvety", "hairy"}, 5},
    {"slippery", {"slick", "greasy", "glassy", "slimy", "oily"}, 5},
    {"sticky", {"adhesive", "gluey", "tacky", "gummy", "viscous"}, 5},
    {"flexible", {"pliable", "supple", "limber", "elastic", "bendable"}, 5},
    {"rigid", {"stiff", "inflexible", "unyielding", "hard", "unbending"}, 5},

    // === TIME-RELATED ===
    {"early", {"premature", "untimely", "advance", "forward", "first"}, 5},
    {"late", {"delayed", "overdue", "tardy", "belated", "behindhand"}, 5},
    {"quick", {"fast", "speedy", "rapid", "swift", "brisk"}, 5},
    {"permanent", {"lasting", "enduring", "constant", "persistent", "eternal"}, 5},
    {"temporary", {"transient", "brief", "fleeting", "short-term", "provisional"}, 5},

    // === PERSONAL QUALITIES ===
    {"smart", {"intelligent", "clever", "bright", "brilliant", "sharp"}, 5},
    {"stupid", {"dumb", "unintelligent", "foolish", "dense", "slow-witted"}, 5},
    {"funny", {"humorous", "amusing", "comical", "hilarious", "witty"}, 5},
    {"serious", {"grave", "solemn", "earnest", "sober", "stern"}, 5},
    {"honest", {"truthful", "sincere", "forthright", "genuine", "trustworthy"}, 5},

    // === SPATIAL RELATIONS ===
    {"high", {"tall", "elevated", "lofty", "soaring", "towering"}, 5},
    {"low", {"short", "small", "squat", "stunted", "ground-level"}, 5},
    {"deep", {"profound", "bottomless", "yawning", "cavernous", "intense"}, 5},
    {"shallow", {"superficial", "surface-level", "slight", "skin-deep", "empty"}, 5},
    {"near", {"close", "adjacent", "bordering", "neighboring", "approaching"}, 5},

    // === ABSTRACT QUALITIES ===
    {"real", {"genuine", "authentic", "actual", "true", "bona fide"}, 5},
    {"fake", {"false", "counterfeit", "sham", "artificial", "imitation"}, 5},
    {"possible", {"feasible", "achievable", "practicable", "viable", "attainable"}, 5},
    {"impossible", {"unattainable", "unachievable", "impracticable", "unworkable", "hopeless"}, 5},
    {"certain", {"sure", "definite", "positive", "convinced", "confident"}, 5},

    // === QUANTITY MODIFIERS ===
    {"enough", {"sufficient", "adequate", "satisfactory", "acceptable", "ample"}, 5},
    {"extra", {"additional", "supplementary", "surplus", "spare", "excess"}, 5},
    {"complete", {"total", "entire", "whole", "full", "thorough"}, 5},
    {"partial", {"incomplete", "fractional", "limited", "halfway", "unfinished"}, 5},
    {"double", {"duplicate", "twin", "twofold", "paired", "matching"}, 5},

    // === EVALUATIVE ===
    {"perfect", {"flawless", "ideal", "exemplary", "immaculate", "faultless"}, 5},
    {"awful", {"terrible", "dreadful", "horrible", "atrocious", "appalling"}, 5},
    {"strange", {"odd", "peculiar", "weird", "bizarre", "unusual"}, 5},
    {"normal", {"ordinary", "usual", "typical", "conventional", "standard"}, 5},
    {"special", {"unique", "distinctive", "exceptional", "notable", "remarkable"}, 5},

    // === VISUAL QUALITIES ===
    {"beautiful", {"lovely", "gorgeous", "stunning", "attractive", "graceful"}, 5},
    {"ugly", {"unattractive", "hideous", "grotesque", "repulsive", "unsightly"}, 5},
    {"plain", {"simple", "unadorned", "basic", "unembellished", "modest"}, 5},
    {"fancy", {"ornate", "decorative", "elaborate", "intricate", "embellished"}, 5},
    {"sparkling", {"shimmering", "glittering", "twinkling", "scintillating", "glistening"}, 5},

    // ===== 50 VERBS =====
    {"run", {"sprint", "dash", "jog", "race", "scurry"}, 5},
    {"walk", {"stroll", "amble", "saunter", "hike", "trudge"}, 5},
    {"eat", {"consume", "devour", "ingest", "nosh", "munch"}, 5},
    {"drink", {"sip", "imbibe", "quaff", "gulp", "swig"}, 5},
    {"see", {"look", "view", "observe", "witness", "perceive"}, 5},
    {"say", {"speak", "utter", "express", "state", "declare"}, 5},
    {"get", {"obtain", "acquire", "receive", "gain", "secure"}, 5},
    {"make", {"create", "build", "construct", "fabricate", "form"}, 5},
    {"think", {"ponder", "consider", "reflect", "contemplate", "meditate"}, 5},
    {"go", {"move", "travel", "proceed", "advance", "journey"}, 5},

    // === MOVEMENT VERBS ===
    {"walk", {"stroll", "amble", "saunter", "trudge", "hike"}, 5},
    {"run", {"sprint", "dash", "jog", "scurry", "race"}, 5},
    {"jump", {"leap", "bound", "hop", "vault", "spring"}, 5},
    {"fly", {"soar", "glide", "hover", "flutter", "aviate"}, 5},
    {"swim", {"paddle", "dive", "float", "splash", "freestyle"}, 5},

    // === COMMUNICATION VERBS ===
    {"speak", {"talk", "utter", "verbalize", "articulate", "express"}, 5},
    {"shout", {"yell", "scream", "bellow", "roar", "holler"}, 5},
    {"whisper", {"murmur", "mutter", "hush", "breathe", "confide"}, 5},
    {"ask", {"question", "inquire", "query", "interrogate", "quiz"}, 5},
    {"answer", {"respond", "reply", "retort", "acknowledge", "counter"}, 5},

    // === COGNITIVE VERBS ===
    {"think", {"ponder", "consider", "reflect", "contemplate", "meditate"}, 5},
    {"know", {"understand", "comprehend", "recognize", "realize", "grasp"}, 5},
    {"remember", {"recall", "recollect", "reminisce", "retain", "memorize"}, 5},
    {"forget", {"overlook", "neglect", "disregard", "ignore", "omit"}, 5},
    {"learn", {"study", "master", "acquire", "absorb", "memorize"}, 5},

    // === ACTION VERBS ===
    {"give", {"donate", "provide", "offer", "hand", "present"}, 5},
    {"take", {"grab", "seize", "snatch", "acquire", "collect"}, 5},
    {"make", {"create", "build", "construct", "fabricate", "manufacture"}, 5},
    {"break", {"shatter", "smash", "fracture", "crack", "destroy"}, 5},
    {"fix", {"repair", "mend", "correct", "restore", "patch"}, 5},

    // === EMOTION VERBS ===
    {"love", {"adore", "cherish", "treasure", "idolize", "worship"}, 5},
    {"hate", {"despise", "loathe", "detest", "abhor", "scorn"}, 5},
    {"enjoy", {"like", "relish", "savor", "appreciate", "delight"}, 5},
    {"cry", {"weep", "sob", "bawl", "whimper", "mourn"}, 5},
    {"laugh", {"giggle", "chuckle", "cackle", "guffaw", "snicker"}, 5},

    // === TRANSITION VERBS ===
    {"begin", {"start", "commence", "initiate", "launch", "embark"}, 5},
    {"end", {"finish", "conclude", "terminate", "complete", "cease"}, 5},
    {"change", {"alter", "modify", "transform", "convert", "adapt"}, 5},
    {"stay", {"remain", "linger", "persist", "continue", "abide"}, 5},
    {"leave", {"depart", "exit", "withdraw", "vacate", "abandon"}, 5},

    // === SENSORY VERBS ===
    {"see", {"look", "view", "observe", "witness", "perceive"}, 5},
    {"hear", {"listen", "overhear", "eavesdrop", "detect", "catch"}, 5},
    {"touch", {"feel", "stroke", "caress", "pat", "brush"}, 5},
    {"taste", {"sample", "savor", "try", "test", "experience"}, 5},
    {"smell", {"sniff", "scent", "whiff", "detect", "inhale"}, 5},

    // === HELPING VERBS ===
    {"can", {"able", "capable", "qualified", "competent", "permitted"}, 5},
    {"should", {"ought", "must", "need", "required", "expected"}, 5},
    {"will", {"shall", "going to", "intend", "plan", "destined"}, 5},
    {"might", {"could", "possibly", "maybe", "potentially", "conceivably"}, 5},
    {"must", {"have to", "required", "compelled", "obliged", "forced"}, 5},

    // ===== 40 ADVERBS =====
    // === MANNER ADVERBS (HOW?) ===
    {"quickly", {"rapidly", "swiftly", "speedily", "briskly", "hastily"}, 5},
    {"slowly", {"gradually", "leisurely", "unhurriedly", "languidly", "ponderously"}, 5},
    {"carefully", {"cautiously", "prudently", "meticulously", "attentively", "deliberately"}, 5},
    {"loudly", {"noisily", "vociferously", "boisterously", "deafeningly", "thunderously"}, 5},
    {"quietly", {"silently", "softly", "murmuringly", "hushedly", "inaudibly"}, 5},

    // === TIME ADVERBS (WHEN?) ===
    {"now", {"immediately", "instantly", "presently", "promptly", "right away"}, 5},
    {"later", {"afterwards", "subsequently", "thereafter", "eventually", "by and by"}, 5},
    {"soon", {"shortly", "directly", "momentarily", "before long", "in a while"}, 5},
    {"always", {"forever", "perpetually", "eternally", "unceasingly", "invariably"}, 5},
    {"never", {"not ever", "at no time", "under no circumstances", "on no account", "in no way"}, 5},

    // === FREQUENCY ADVERBS (HOW OFTEN?) ===
    {"often", {"frequently", "repeatedly", "regularly", "habitually", "commonly"}, 5},
    {"sometimes", {"occasionally", "intermittently", "periodically", "sporadically", "at times"}, 5},
    {"rarely", {"seldom", "infrequently", "hardly ever", "scarcely", "almost never"}, 5},
    {"usually", {"normally", "typically", "generally", "customarily", "as a rule"}, 5},
    {"daily", {"every day", "day after day", "diurnally", "day by day", "quotidianly"}, 5},

    // === PLACE ADVERBS (WHERE?) ===
    {"here", {"in this place", "on this spot", "hither", "over here", "right here"}, 5},
    {"there", {"in that place", "thither", "yonder", "over there", "at that point"}, 5},
    {"nearby", {"close by", "in the vicinity", "not far away", "adjacent", "proximate"}, 5},
    {"away", {"off", "absent", "elsewhere", "at a distance", "apart"}, 5},
    {"everywhere", {"all over", "in all places", "ubiquitously", "universally", "far and wide"}, 5},

    // === DEGREE ADVERBS (HOW MUCH?) ===
    {"very", {"extremely", "exceedingly", "immensely", "intensely", "profoundly"}, 5},
    {"almost", {"nearly", "practically", "virtually", "just about", "all but"}, 5},
    {"too", {"excessively", "overly", "unduly", "inordinately", "unreasonably"}, 5},
    {"enough", {"sufficiently", "adequately", "satisfactorily", "amply", "reasonably"}, 5},
    {"completely", {"totally", "entirely", "utterly", "thoroughly", "absolutely"}, 5},

    // === SENTENCE ADVERBS (OPINION) ===
    {"fortunately", {"luckily", "happily", "providentially", "mercifully", "thankfully"}, 5},
    {"unfortunately", {"regrettably", "sadly", "alas", "unluckily", "woefully"}, 5},
    {"probably", {"likely", "presumably", "doubtless", "in all probability", "plausibly"}, 5},
    {"certainly", {"definitely", "surely", "undoubtedly", "indubitably", "unquestionably"}, 5},
    {"obviously", {"clearly", "evidently", "manifestly", "patently", "transparently"}, 5},

    // === INTERROGATIVE ADVERBS (QUESTION) ===
    {"when", {"at what time", "on what occasion", "how soon", "in what period", "under what circumstances"}, 5},
    {"where", {"in what place", "to what place", "at what location", "in which direction", "whither"}, 5},
    {"how", {"in what way", "by what means", "to what degree", "in what condition", "by what method"}, 5},
    {"why", {"for what reason", "on what account", "to what purpose", "wherefore", "how come"}, 5},
    {"whence", {"from where", "from what place", "from what source", "from what origin", "from what cause"}, 5},

};

int DICT_SIZE = sizeof(dictionary) / sizeof(dictionary[0]);

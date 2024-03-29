#include "periodic.h"

// @Path : src\periodic.c
// Contains the periodic table data, functions, and different access methods.

// Contains the elements of the periodic table
char elements[118][MAX_STRING] = {
    "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon", "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium",  "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"
};

// Contains the relative atomic mass of the elements
double relativeAtomic[118] = {
    1.007, 4.0026, 6.941, 9.0122, 10.811, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.086, 30.974, 32.066, 35.453, 39.948, 39.098, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.390, 69.723, 72.630, 74.922, 78.971, 79.904, 83.798, 85.468, 87.620, 88.906, 91.224, 92.906, 95.940, 98.000, 101.070, 102.906, 106.420, 107.868, 112.411, 114.818, 118.710, 121.760, 127.600, 126.904, 131.293, 132.905, 137.327, 138.906, 140.116, 140.908, 144.242, 145.000, 150.360, 151.964, 157.250, 158.925, 162.500, 164.930, 167.259, 168.934, 173.054, 174.967, 178.490, 180.948, 183.840, 186.207, 190.230, 192.217, 195.078, 196.967, 200.590, 204.383, 207.200, 208.980, 209.000, 210.000, 222.000, 223.000, 226.000, 227.000, 232.038, 231.036, 238.029, 237.000, 244.000, 243.000, 247.000, 247.000, 251.000, 252.000, 257.000, 258
};

// @Usage : api_getElementName("H");
// @Param : element - The elements symbol.
// @Brief : Take the elements symbol as an input and returns the name of the element.
/*
    Takes the elements symbol as an input and returns the name of the element.
    For example, if the input is "H", the output will be "Hydrogen".
    This can be used for every element in the periodic table.
*/
void api_getElementName(char element[MAX_STRING]) {
    if (strcmp(element, "H")==0) {
        printf("Hydrogen\n");
    }
    else if (strcmp(element,"He")==0) {
        printf("Helium\n");
    }
    else if (strcmp(element,"Li")==0) {
        printf("Lithium\n");
    }
    else if (strcmp(element,"Be")==0) {
        printf("Beryllium\n");
    }
    else if (strcmp(element,"B")==0) {
        printf("Boron\n");
    }
    else if (strcmp(element,"C")==0) {
        printf("Carbon\n");
    }
    else if (strcmp(element,"N")==0) {
        printf("Nitrogen\n");
    }
    else if (strcmp(element,"O")==0) {
        printf("Oxygen\n");
    }
    else if (strcmp(element,"F")==0) {
        printf("Flourine\n");
    }
    else if (strcmp(element,"Ne")==0) {
        printf("Neon\n");
    }
    else if (strcmp(element,"Na")==0) {
        printf("Sodium\n");
    }
    else if (strcmp(element,"Mg")==0) {
        printf("Magensium\n");
    }
    else if (strcmp(element,"Al")==0) {
        printf("Aluminum\n");
    }
    else if (strcmp(element,"Si")==0) {
        printf("Silicon\n");
    }
    else if (strcmp(element,"P")==0) {
        printf("Phosphorus\n");
    }
    else if (strcmp(element,"S")==0) {
        printf("Sulfur\n");
    }
    else if (strcmp(element,"Cl")==0) {
        printf("Chlorine\n");
    }
    else if (strcmp(element,"Ar")==0) {
        printf("Argon\n");
    }
    else if (strcmp(element,"K")==0) {
        printf("Potassium\n");
    }
    else if (strcmp(element,"Ca")==0) {
        printf("Calcium\n");
    }
    else if (strcmp(element,"Ti")==0) {
        printf("Titanium\n");
    }
    else if (strcmp(element,"V")==0) {
        printf("Vanadium\n");
    }
    else if (strcmp(element,"Cr")==0) {
        printf("Chromium\n");
    }
    else if (strcmp(element,"Mn")==0) {
        printf("Maganese\n");
    }
    else if (strcmp(element,"Fe")==0) {
        printf("Iron\n");
    }
    else if (strcmp(element,"Co")==0) {
        printf("Cobalt\n");
    }
    else if (strcmp(element,"Ni")==0) {
        printf("Nickel\n");
    }
    else if (strcmp(element,"Cu")==0) {
        printf("Copper\n");
    }
    else if (strcmp(element,"Zn")==0) {
        printf("Zinc\n");
    }
    else if (strcmp(element,"Ga")==0) {
        printf("Gallium\n");
    }
    else if (strcmp(element,"Ge")==0) {
        printf("Germanium\n");
    }
    else if (strcmp(element,"As")==0) {
        printf("Arsenic\n");
    }
    else if (strcmp(element,"Se")==0) {
        printf("Selenium\n");
    }
    else if (strcmp(element,"Br")==0) {
        printf("Bromine\n");
    }
    else if (strcmp(element,"Kr")==0) {
        printf("Krypton\n");
    }
    else if (strcmp(element,"Rb")==0) {
        printf("Rubidium\n");
    }
    else if (strcmp(element,"Sr")==0) {
        printf("Strontium\n");
    }
    else if (strcmp(element,"Y")==0) {
        printf("Yttrium\n");
    }
    else if (strcmp(element,"Zr")==0) {
        printf("Zirconium\n");
    }
    else if (strcmp(element,"Nb")==0) {
        printf("Niobium\n");
    }
    else if (strcmp(element,"Mo")==0) {
        printf("Molybdenum\n");
    }
    else if (strcmp(element,"Tc")==0) {
        printf("Technetium\n");
    }
    else if (strcmp(element,"Ru")==0) {
        printf("Ruthenium\n");
    }
    else if (strcmp(element,"Rh")==0) {
        printf("Rhodium\n");
    }
    else if (strcmp(element,"Pd")==0) {
        printf("Palladium\n");
    }
    else if (strcmp(element,"Ag")==0) {
        printf("Silver\n");
    }
    else if (strcmp(element,"Cd")==0) {
        printf("Cadmium\n");
    }
    else if (strcmp(element,"In")==0) {
        printf("Indium\n");
    }
    else if (strcmp(element,"Sn")==0) {
        printf("Tin\n");
    }
    else if (strcmp(element,"Sb")==0) {
        printf("Antimony\n");
    }
    else if (strcmp(element,"Te")==0) {
        printf("Tellurium\n");
    }
    else if (strcmp(element,"I")==0) {
        printf("Iodine\n");
    }
    else if (strcmp(element,"Xe")==0) {
        printf("Xenon\n");
    }
    else if (strcmp(element,"Cs")==0) {
        printf("Caesium\n");
    }
    else if (strcmp(element,"Ba")==0) {
        printf("Barium\n");
    }
    else if (strcmp(element,"La")==0) {
        printf("Lanthanum\n");
    }
    else if (strcmp(element,"Hf")==0) {
        printf("Hafnium\n");
    }
    else if (strcmp(element,"Ta")==0) {
        printf("Tantalum\n");
    }
    else if (strcmp(element,"W")==0) {
        printf("Tungsten\n");
    }
    else if (strcmp(element,"Re")==0) {
        printf("Rhenium\n");
    }
    else if (strcmp(element,"Os")==0) {
        printf("Osmium\n");
    }
    else if (strcmp(element,"Ir")==0) {
        printf("Iridium\n");
    }
    else if (strcmp(element,"Pt")==0) {
        printf("Platinum\n");
    }
    else if (strcmp(element,"Au")==0) {
        printf("Gold\n");
    }
    else if (strcmp(element,"Hg")==0) {
        printf("Mercury\n");
    }
    else if (strcmp(element,"Tl")==0) {
        printf("Thallium\n");
    }
    else if (strcmp(element,"Pb")==0) {
        printf("Lead\n");
    }
    else if (strcmp(element,"Bi")==0) {
        printf("Bismuth\n");
    }
    else if (strcmp(element,"Po")==0) {
        printf("Polonium\n");
    }
    else if (strcmp(element,"At")==0) {
        printf("Astatine\n");
    }
    else if (strcmp(element,"Rn")==0) {
        printf("Radon\n");
    }
    else if (strcmp(element,"Fr")==0) {
        printf("Francium\n");
    }
    else if (strcmp(element,"Ra")==0) {
        printf("Radium\n");
    }
    else if (strcmp(element,"Ac")==0) {
        printf("Actinium\n");
    }
    else if (strcmp(element,"Rf")==0) {
        printf("Rutherfordium\n");
    }
    else if (strcmp(element,"Db")==0) {
        printf("Dubnium\n");
    }
    else if (strcmp(element,"Sg")==0) {
        printf("Seaborgium\n");
    }
    else if (strcmp(element,"Bh")==0) {
        printf("Bohrium\n");
    }
    else if (strcmp(element,"Hs")==0) {
        printf("Hassium\n");
    }
    else if (strcmp(element,"Mt")==0) {
        printf("Meitnerium\n");
    }
    else if (strcmp(element,"Ds")==0) {
        printf("Darmstadtium\n");
    }
    else if (strcmp(element,"Rg")==0) {
        printf("Roentgenium\n");
    }
    else if (strcmp(element,"Cn")==0) {
        printf("Copernicium\n");
    }
    else if (strcmp(element,"Nh")==0) {
        printf("Nihonium\n");
    }
    else if (strcmp(element,"Fl")==0) {
        printf("Flerovium\n");
    }
    else if (strcmp(element,"Mc")==0) {
        printf("Moscovium\n");
    }
    else if (strcmp(element,"Lv")==0) {
        printf("Livermorium\n");
    }
    else if (strcmp(element,"Ts")==0) {
        printf("Tenessine\n");
    }
    else if (strcmp(element,"Og")==0) {
        printf("Oganesson\n");
    }
    else if (strcmp(element,"Ce")==0) {
        printf("Cerium\n");
    }
    else if (strcmp(element,"Pr")==0) {
        printf("Praseodymium\n");
    }
    else if (strcmp(element,"Nd")==0) {
        printf("Neodymium\n");
    }
    else if (strcmp(element,"Pm")==0) {
        printf("Promethium\n");
    }
    else if (strcmp(element,"Sm")==0) {
        printf("Samarium\n");
    }
    else if (strcmp(element,"Eu")==0) {
        printf("Europium\n");
    }
    else if (strcmp(element,"Gd")==0) {
        printf("Gadolinium\n");
    }
    else if (strcmp(element,"Tb")==0) {
        printf("Terbium\n");
    }
    else if (strcmp(element,"Dy")==0) {
        printf("Dysprosium\n");
    }
    else if (strcmp(element,"Ho")==0) {
        printf("Holmium\n");
    }
    else if (strcmp(element,"Er")==0) {
        printf("Erbium\n");
    }
    else if (strcmp(element,"Tm")==0) {
        printf("Thulium\n");
    }
    else if (strcmp(element,"Yb")==0) {
        printf("Ytterbium\n");
    }
    else if (strcmp(element,"Lu")==0) {
        printf("Lutetium\n");
    }
    else if (strcmp(element,"Th")==0) {
        printf("Thorium\n");
    }
    else if (strcmp(element,"Pa")==0) {
        printf("Protactinium\n");
    }
    else if (strcmp(element,"U")==0) {
        printf("Uranium\n");
    }
    else if (strcmp(element,"Np")==0) {
        printf("Neptunium\n");
    }
    else if (strcmp(element,"Pu")==0) {
        printf("Plutonium\n");
    }
    else if (strcmp(element,"Am")==0) {
        printf("Americium\n");
    }
    else if (strcmp(element,"Cm")==0) {
        printf("Curium\n");
    }
    else if (strcmp(element,"Bk")==0) {
        printf("Berkelium\n");
    }
    else if (strcmp(element,"Cf")==0) {
        printf("Californium\n");
    }
    else if (strcmp(element,"Es")==0) {
        printf("Einsteinium\n");
    }
    else if (strcmp(element,"Fm")==0) {
        printf("Fermium\n");
    }
    else if (strcmp(element,"Md")==0) {
        printf("Mendelevium\n");
    }
    else if (strcmp(element,"No")==0) {
        printf("Nobelium\n");
    }
    else if (strcmp(element,"Lr")==0) {
        printf("Lawrencium\n");
    }
    else {
        printf("Unknown element.\nInitials are CasE SenSitIVE.\n");
    }
}

// @Usage : api_getElementSymbol("Hydrogen");
// @Param : element - The elements name.
// @Brief : Takes an elements name and returns the symbol.
/*
    Takes an elements name and returns the symbol.
    For example, if the input is "Hydrogen", the output will be "H".
    This can be used for every element in the periodic table.
*/
void api_getElementSymbol(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0) {
        printf("H\n");
    }
    else if (strcmp(element,"Helium")==0) {
        printf("He\n");
    }
    else if (strcmp(element,"Lithium")==0) {
        printf("Li\n");
    }
    else if (strcmp(element,"Beryllium")==0) {
        printf("Be\n");
    }
    else if (strcmp(element,"Boron")==0) {
        printf("B\n");
    }
    else if (strcmp(element,"Carbon")==0) {
        printf("C\n");
    }
    else if (strcmp(element,"Nitrogen")==0) {
        printf("N\n");
    }
    else if (strcmp(element,"Oxygen")==0) {
        printf("O\n");
    }
    else if (strcmp(element,"Fluorine")==0) {
        printf("F\n");
    }
    else if (strcmp(element,"Neon")==0) {
        printf("Ne\n");
    }
    else if (strcmp(element,"Sodium")==0) {
        printf("Na\n");
    }
    else if (strcmp(element,"Magnesium")==0) {
        printf("Mg\n");
    }
    else if (strcmp(element,"Aluminum")==0) {
        printf("Al\n");
    }
    else if (strcmp(element,"Silicon")==0) {
        printf("Si\n");
    }
    else if (strcmp(element,"Phosphorus")==0) {
        printf("P\n");
    }
    else if (strcmp(element,"Sulfur")==0) {
        printf("S\n");
    }
    else if (strcmp(element,"Chlorine")==0) {
        printf("Cl\n");
    }
    else if (strcmp(element,"Argon")==0) {
        printf("Ar\n");
    }
    else if (strcmp(element,"Potassium")==0) {
        printf("K\n");
    }
    else if (strcmp(element,"Calcium")==0) {
        printf("Ca\n");
    }
    else if (strcmp(element,"Scandium")==0) {
        printf("Sc\n");
    }
    else if (strcmp(element,"Titanium")==0) {
        printf("Ti\n");
    }
    else if (strcmp(element,"Vanadium")==0) {
        printf("V\n");
    }
    else if (strcmp(element,"Chromium")==0) {
        printf("Cr\n");
    }
    else if (strcmp(element,"Manganese")==0) {
        printf("Mn\n");
    }
    else if (strcmp(element,"Iron")==0) {
        printf("Fe\n");
    }
    else if (strcmp(element,"Cobalt")==0) {
        printf("Co\n");
    }
    else if (strcmp(element,"Nickel")==0) {
        printf("Ni\n");
    }
    else if (strcmp(element,"Copper")==0) {
        printf("Cu\n");
    }
    else if (strcmp(element,"Zinc")==0) {
        printf("Zn\n");
    }
    else if (strcmp(element,"Gallium")==0) {
        printf("Ga\n");
    }
    else if (strcmp(element,"Germanium")==0) {
        printf("Ge\n");
    }
    else if (strcmp(element,"Arsenic")==0) {
        printf("As\n");
    }
    else if (strcmp(element,"Selenium")==0) {
        printf("Se\n");
    }
    else if (strcmp(element,"Bromine")==0) {
        printf("Br\n");
    }
    else if (strcmp(element,"Krypton")==0) {
        printf("Kr\n");
    }
    else if (strcmp(element,"Rubidium")==0) {
        printf("Rb\n");
    }
    else if (strcmp(element,"Strontium")==0) {
        printf("Sr\n");
    }
    else if (strcmp(element,"Yttrium")==0) {
        printf("Y\n");
    }
    else if (strcmp(element,"Zirconium")==0) {
        printf("Zr\n");
    }
    else if (strcmp(element,"Niobium")==0) {
        printf("Nb\n");
    }
    else if (strcmp(element,"Molybdenum")==0) {
        printf("Mo\n");
    }
    else if (strcmp(element,"Technetium")==0) {
        printf("Tc\n");
    }
    else if (strcmp(element,"Ruthenium")==0) {
        printf("Ru\n");
    }
    else if (strcmp(element,"Rhodium")==0) {
        printf("Rh\n");
    }
    else if (strcmp(element,"Palladium")==0) {
        printf("Pd\n");
    }
    else if (strcmp(element,"Silver")==0) {
        printf("Ag\n");
    }
    else if (strcmp(element,"Cadmium")==0) {
        printf("Cd\n");
    }
    else if (strcmp(element,"Indium")==0) {
        printf("In\n");
    }
    else if (strcmp(element,"Tin")==0) {
        printf("Sn\n");
    }
    else if (strcmp(element,"Antimony")==0) {
        printf("Sb\n");
    }
    else if (strcmp(element,"Tellurium")==0) {
        printf("Te\n");
    }
    else if (strcmp(element,"Iodine")==0) {
        printf("I\n");
    }
    else if (strcmp(element,"Xenon")==0) {
        printf("Xe\n");
    }
    else if (strcmp(element,"Cesium")==0) {
        printf("Cs\n");
    }
    else if (strcmp(element,"Barium")==0) {
        printf("Ba\n");
    }
    else if (strcmp(element,"Lanthanum")==0) {
        printf("La\n");
    }
    else if (strcmp(element,"Cerium")==0) {
        printf("Ce\n");
    }
    else if (strcmp(element,"Praseodymium")==0) {
        printf("Pr\n");
    }
    else if (strcmp(element,"Neodymium")==0) {
        printf("Nd\n");
    }
    else if (strcmp(element,"Promethium")==0) {
        printf("Pm\n");
    }
    else if (strcmp(element,"Samarium")==0) {
        printf("Sm\n");
    }
    else if (strcmp(element,"Europium")==0) {
        printf("Eu\n");
    }
    else if (strcmp(element,"Gadolinium")==0) {
        printf("Gd\n");
    }
    else if (strcmp(element,"Terbium")==0) {
        printf("Tb\n");
    }
    else if (strcmp(element,"Dysprosium")==0) {
        printf("Dy\n");
    }
    else if (strcmp(element,"Holmium")==0) {
        printf("Ho\n");
    }
    else if (strcmp(element,"Erbium")==0) {
        printf("Er\n");
    }
    else if (strcmp(element,"Thulium")==0) {
        printf("Tm\n");
    }
    else if (strcmp(element,"Ytterbium")==0) {
        printf("Yb\n");
    }
    else if (strcmp(element,"Lutetium")==0) {
        printf("Lu\n");
    }
    else if (strcmp(element,"Hafnium")==0) {
        printf("Hf\n");
    }
    else if (strcmp(element,"Tantalum")==0) {
        printf("Ta\n");
    }
    else if (strcmp(element,"Tungsten")==0) {
        printf("W\n");
    }
    else if (strcmp(element,"Rhenium")==0) {
        printf("Re\n");
    }
    else if (strcmp(element,"Osmium")==0) {
        printf("Os\n");
    }
    else if (strcmp(element,"Iridium")==0) {
        printf("Ir\n");
    }
    else if (strcmp(element,"Platinum")==0) {
        printf("Pt\n");
    }
    else if (strcmp(element,"Gold")==0) {
        printf("Au\n");
    }
    else if (strcmp(element,"Mercury")==0) {
        printf("Hg\n");
    }
    else if (strcmp(element,"Thallium")==0) {
        printf("Tl\n");
    }
    else if (strcmp(element,"Lead")==0) {
        printf("Pb\n");
    }
    else if (strcmp(element,"Bismuth")==0) {
        printf("Bi\n");
    }
    else if (strcmp(element,"Polonium")==0) {
        printf("Po\n");
    }
    else if (strcmp(element,"Astatine")==0) {
        printf("At\n");
    }
    else if (strcmp(element,"Radon")==0) {
        printf("Rn\n");
    }
    else if (strcmp(element,"Francium")==0) {
        printf("Fr\n");
    }
    else if (strcmp(element,"Radium")==0) {
        printf("Ra\n");
    }
    else if (strcmp(element,"Actinium")==0) {
        printf("Ac\n");
    }
    else if (strcmp(element,"Thorium")==0) {
        printf("Th\n");
    }
    else if (strcmp(element,"Protactinium")==0) {
        printf("Pa\n");
    }
    else if (strcmp(element,"Uranium")==0) {
        printf("U\n");
    }
    else if (strcmp(element,"Neptunium")==0) {
        printf("Np\n");
    }
    else if (strcmp(element,"Plutonium")==0) {
        printf("Pu\n");
    }
    else if (strcmp(element,"Americium")==0) {
        printf("Am\n");
    }
    else if (strcmp(element,"Curium")==0) {
        printf("Cm\n");
    }
    else if (strcmp(element,"Berkelium")==0) {
        printf("Bk\n");
    }
    else if (strcmp(element,"Californium")==0) {
        printf("Cf\n");
    }
    else if (strcmp(element,"Einsteinium")==0) {
        printf("Es\n");
    }
    else if (strcmp(element,"Fermium")==0) {
        printf("Fm\n");
    }
    else if (strcmp(element,"Mendelevium")==0) {
        printf("Md\n");
    }
    else if (strcmp(element,"Nobelium")==0) {
        printf("No\n");
    }
    else if (strcmp(element,"Lawrencium")==0) {
        printf("Lr\n");
    }
    else if (strcmp(element,"Rutherfordium")==0) {
        printf("Rf\n");
    }
    else if (strcmp(element,"Dubnium")==0) {
        printf("Db\n");
    }
    else if (strcmp(element,"Seaborgium")==0) {
        printf("Sg\n");
    }
    else if (strcmp(element,"Bohrium")==0) {
        printf("Bh\n");
    }
    else if (strcmp(element,"Hassium")==0) {
        printf("Hs\n");
    }
    else if (strcmp(element,"Meitnerium")==0) {
        printf("Mt\n");
    }
    else if (strcmp(element,"Darmstadtium")==0) {
        printf("Ds\n");
    }
    else if (strcmp(element,"Roentgenium")==0) {
        printf("Rg\n");
    }
    else if (strcmp(element,"Copernicium")==0) {
        printf("Cn\n");
    }
    else if (strcmp(element,"Nihonium")==0) {
        printf("Nh\n");
    }
    else if (strcmp(element,"Flerovium")==0) {
        printf("Fl\n");
    }
    else if (strcmp(element,"Moscovium")==0) {
        printf("Mc\n");
    }
    else if (strcmp(element,"Livermorium")==0) {
        printf("Lv\n");
    }
    else if (strcmp(element,"Tennessine")==0) {
        printf("Ts\n");
    }
    else if (strcmp(element,"Oganesson")==0) {
        printf("Og\n");
    }
    else {
        printf("Unknown element.\nNames are CasE SenSitIVE.\n");
    }
}

// @Usage : api_listAllElements();
// @Brief : Prints all the elements in the periodic table.
/*
    Prints all the elements in the periodic table. 
    There is no need to pass any arguments.
*/
void api_listAllElements() {
    for (int i = 0; i < 118; i++) {
        printf("%s\n",elements[i]);
    }
}

// @Usage : api_getElement(5);
// @Param : number - The number of the element in the periodic table.
// @Brief : Prints the element in the position of the number passed.
/*
    Prints the element in the position of the number passed.
    The number must be between 1 and 118.
*/
void api_getElement(int number) {
    if (number > 0 && number < 119) {
        printf("%s",elements[number-1]);
    }
    else {
        printf("Invalid number.\nType a number between 1 and 118.\n");
    }
}

// @Usage : api_listAllElementGroups();
// @Brief : Prints all element groups in the periodic table.
/*
    Prints all element groups in the periodic table.
    There is no need to pass any arguments.
*/
void api_listAllElementGroups() {
    printf("1. Alkali metals\n");
    printf("2. Alkaline earth metals\n");
    printf("3. Lanthanides\n");
    printf("4. Actinides\n");
    printf("5. Transition metals\n");
    printf("6. Post-transition metals\n");
    printf("7. Metalloids\n");
    printf("8. Nonmetals\n");
    printf("9. Halogens\n");
    printf("10. Noble gases\n");
}

// @Usage : api_getElementGroup();
// @Param : element - The element to be searched.
// @Brief : Prints the element group of the element passed.
/*
    Prints the element group of the element passed.
    The element must be a valid element.
*/
void api_getElementGroup(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0 || strcmp(element,"H")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Helium")==0 || strcmp(element,"He")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Lithium")==0 || strcmp(element,"Li")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Beryllium")==0 || strcmp(element,"Be")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Boron")==0 || strcmp(element,"B")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Carbon")==0 || strcmp(element,"C")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Nitrogen")==0 || strcmp(element,"N")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Oxygen")==0 || strcmp(element,"O")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Fluorine")==0 || strcmp(element,"F")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Neon")==0 || strcmp(element,"Ne")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Sodium")==0 || strcmp(element,"Na")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Magnesium")==0 || strcmp(element,"Mg")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Aluminum")==0 || strcmp(element,"Al")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Silicon")==0 || strcmp(element,"Si")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Phosphorus")==0 || strcmp(element,"P")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Sulfur")==0 || strcmp(element,"S")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Chlorine")==0 || strcmp(element,"Cl")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Argon")==0 || strcmp(element,"Ar")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Potassium")==0 || strcmp(element,"K")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Calcium")==0 || strcmp(element,"Ca")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Scandium")==0 || strcmp(element,"Sc")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Titanium")==0 || strcmp(element,"Ti")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Vanadium")==0 || strcmp(element,"V")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Chromium")==0 || strcmp(element,"Cr")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Manganese")==0 || strcmp(element,"Mn")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Iron")==0 || strcmp(element,"Fe")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Cobalt")==0 || strcmp(element,"Co")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Nickel")==0 || strcmp(element,"Ni")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Copper")==0 || strcmp(element,"Cu")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Zinc")==0 || strcmp(element,"Zn")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Gallium")==0 || strcmp(element,"Ga")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Germanium")==0 || strcmp(element,"Ge")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Arsenic")==0 || strcmp(element,"As")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Selenium")==0 || strcmp(element,"Se")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Bromine")==0 || strcmp(element,"Br")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Krypton")==0 || strcmp(element,"Kr")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Rubidium")==0 || strcmp(element,"Rb")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Strontium")==0 || strcmp(element,"Sr")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Yttrium")==0 || strcmp(element,"Y")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Zirconium")==0 || strcmp(element,"Zr")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Niobium")==0 || strcmp(element,"Nb")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Molybdenum")==0 || strcmp(element,"Mo")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Technetium")==0 || strcmp(element,"Tc")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Ruthenium")==0 || strcmp(element,"Ru")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Rhodium")==0 || strcmp(element,"Rh")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Palladium")==0 || strcmp(element,"Pd")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Silver")==0 || strcmp(element,"Ag")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Cadmium")==0 || strcmp(element,"Cd")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Indium")==0 || strcmp(element,"In")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Tin")==0 || strcmp(element,"Sn")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Antimony")==0 || strcmp(element,"Sb")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Tellurium")==0 || strcmp(element,"Te")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Iodine")==0 || strcmp(element,"I")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Xenon")==0 || strcmp(element,"Xe")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Caesium")==0 || strcmp(element,"Cs")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Barium")==0 || strcmp(element,"Ba")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Lanthanum")==0 || strcmp(element,"La")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Cerium")==0 || strcmp(element,"Ce")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Praseodymium")==0 || strcmp(element,"Pr")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Neodymium")==0 || strcmp(element,"Nd")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Promethium")==0 || strcmp(element,"Pm")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Samarium")==0 || strcmp(element,"Sm")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Europium")==0 || strcmp(element,"Eu")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Gadolinium")==0 || strcmp(element,"Gd")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Terbium")==0 || strcmp(element,"Tb")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Dysprosium")==0 || strcmp(element,"Dy")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Holmium")==0 || strcmp(element,"Ho")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Erbium")==0 || strcmp(element,"Er")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Thulium")==0 || strcmp(element,"Tm")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Ytterbium")==0 || strcmp(element,"Yb")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Lutetium")==0 || strcmp(element,"Lu")==0) {
        printf("Lanthanide\n");
    }
    else if (strcmp(element,"Hafnium")==0 || strcmp(element,"Hf")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Tantalum")==0 || strcmp(element,"Ta")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Tungsten")==0 || strcmp(element,"W")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Rhenium")==0 || strcmp(element,"Re")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Osmium")==0 || strcmp(element,"Os")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Iridium")==0 || strcmp(element,"Ir")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Platinum")==0 || strcmp(element,"Pt")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Gold")==0 || strcmp(element,"Au")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Mercury")==0 || strcmp(element,"Hg")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Thallium")==0 || strcmp(element,"Tl")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Lead")==0 || strcmp(element,"Pb")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Bismuth")==0 || strcmp(element,"Bi")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Polonium")==0 || strcmp(element,"Po")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Astatine")==0 || strcmp(element,"At")==0) {
        printf("Reactive nonmetal\n");
    }
    else if (strcmp(element,"Radon")==0 || strcmp(element,"Rn")==0) {
        printf("Noble gas\n");
    }
    else if (strcmp(element,"Francium")==0 || strcmp(element,"Fr")==0) {
        printf("Alkali metal\n");
    }
    else if (strcmp(element,"Radium")==0 || strcmp(element,"Ra")==0) {
        printf("Alkaline earth metal\n");
    }
    else if (strcmp(element,"Actinium")==0 || strcmp(element,"Ac")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Thorium")==0 || strcmp(element,"Th")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Protactinium")==0 || strcmp(element,"Pa")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Uranium")==0 || strcmp(element,"U")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Neptunium")==0 || strcmp(element,"Np")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Plutonium")==0 || strcmp(element,"Pu")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Americium")==0 || strcmp(element,"Am")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Curium")==0 || strcmp(element,"Cm")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Berkelium")==0 || strcmp(element,"Bk")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Californium")==0 || strcmp(element,"Cf")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Einsteinium")==0 || strcmp(element,"Es")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Fermium")==0 || strcmp(element,"Fm")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Mendelevium")==0 || strcmp(element,"Md")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Nobelium")==0 || strcmp(element,"No")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Lawrencium")==0 || strcmp(element,"Lr")==0) {
        printf("Actinide\n");
    }
    else if (strcmp(element,"Rutherfordium")==0 || strcmp(element,"Rf")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Dubnium")==0 || strcmp(element,"Db")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Seaborgium")==0 || strcmp(element,"Sg")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Bohrium")==0 || strcmp(element,"Bh")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Hassium")==0 || strcmp(element,"Hs")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Meitnerium")==0 || strcmp(element,"Mt")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Darmstadtium")==0 || strcmp(element,"Ds")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Roentgenium")==0 || strcmp(element,"Rg")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Copernicium")==0 || strcmp(element,"Cn")==0) {
        printf("Transition metal\n");
    }
    else if (strcmp(element,"Nihonium")==0 || strcmp(element,"Nh")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Flerovium")==0 || strcmp(element,"Fl")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Moscovium")==0 || strcmp(element,"Mc")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Livermorium")==0 || strcmp(element,"Lv")==0) {
        printf("Post-transition metal\n");
    }
    else if (strcmp(element,"Tennessine")==0 || strcmp(element,"Ts")==0) {
        printf("Metalloid\n");
    }
    else if (strcmp(element,"Oganesson")==0 || strcmp(element,"Og")==0) {
        printf("Noble gas\n");
    }
    else {
        printf("Unknown element.\nNames and Initials are CasE SenSitIVE.\n");
    }
}

// @Usage : api_getNGConfig("H");
// @Param : element - The element to get the configuration of.
// @Brief : Prints the noble gas configuration of the element.
/*
    Prints the noble gas configuration of the element provided.
    The element can be provided as the name or symbol.
*/
void api_getNGConfig(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0 || strcmp(element,"H")==0) {
        printf("1s1\n");
    }
    else if (strcmp(element,"Helium")==0 || strcmp(element,"He")==0) {
        printf("1s2\n");
    }
    else if (strcmp(element,"Lithium")==0 || strcmp(element,"Li")==0) {
        printf("[He] 2s1\n");
    }
    else if (strcmp(element,"Beryllium")==0 || strcmp(element,"Be")==0) {
        printf("[He] 2s2\n");
    }
    else if (strcmp(element,"Boron")==0 || strcmp(element,"B")==0) {
        printf("[He] 2s2 2p1\n");
    }
    else if (strcmp(element,"Carbon")==0 || strcmp(element,"C")==0) {
        printf("[He] 2s2 2p2\n");
    }
    else if (strcmp(element,"Nitrogen")==0 || strcmp(element,"N")==0) {
        printf("[He] 2s2 2p3\n");
    }
    else if (strcmp(element,"Oxygen")==0 || strcmp(element,"O")==0) {
        printf("[He] 2s2 2p4\n");
    }
    else if (strcmp(element,"Fluorine")==0 || strcmp(element,"F")==0) {
        printf("[He] 2s2 2p5\n");
    }
    else if (strcmp(element,"Neon")==0 || strcmp(element,"Ne")==0) {
        printf("[He] 2s2 2p6\n");
    }
    else if (strcmp(element,"Sodium")==0 || strcmp(element,"Na")==0) {
        printf("[Ne] 3s1\n");
    }
    else if (strcmp(element,"Magnesium")==0 || strcmp(element,"Mg")==0) {
        printf("[Ne] 3s2\n");
    }
    else if (strcmp(element,"Aluminum")==0 || strcmp(element,"Al")==0) {
        printf("[Ne] 3s2 3p1\n");
    }
    else if (strcmp(element,"Silicon")==0 || strcmp(element,"Si")==0) {
        printf("[Ne] 3s2 3p2\n");
    }
    else if (strcmp(element,"Phosphorus")==0 || strcmp(element,"P")==0) {
        printf("[Ne] 3s2 3p3\n");
    }
    else if (strcmp(element,"Sulfur")==0 || strcmp(element,"S")==0) {
        printf("[Ne] 3s2 3p4\n");
    }
    else if (strcmp(element,"Chlorine")==0 || strcmp(element,"Cl")==0) {
        printf("[Ne] 3s2 3p5\n");
    }
    else if (strcmp(element,"Argon")==0 || strcmp(element,"Ar")==0) {
        printf("[Ne] 3s2 3p6\n");
    }
    else if (strcmp(element,"Potassium")==0 || strcmp(element,"K")==0) {
        printf("[Ar] 4s1\n");
    }
    else if (strcmp(element,"Calcium")==0 || strcmp(element,"Ca")==0) {
        printf("[Ar] 4s2\n");
    }
    else if (strcmp(element,"Scandium")==0 || strcmp(element,"Sc")==0) {
        printf("[Ar] 3d1 4s2\n");
    }
    else if (strcmp(element,"Titanium")==0 || strcmp(element,"Ti")==0) {
        printf("[Ar] 3d2 4s2\n");
    }
    else if (strcmp(element,"Vanadium")==0 || strcmp(element,"V")==0) {
        printf("[Ar] 3d3 4s2\n");
    }
    else if (strcmp(element,"Chromium")==0 || strcmp(element,"Cr")==0) {
        printf("[Ar] 3d5 4s1\n");
    }
    else if (strcmp(element,"Manganese")==0 || strcmp(element,"Mn")==0) {
        printf("[Ar] 3d5 4s2\n");
    }
    else if (strcmp(element,"Iron")==0 || strcmp(element,"Fe")==0) {
        printf("[Ar] 3d6 4s2\n");
    }
    else if (strcmp(element,"Cobalt")==0 || strcmp(element,"Co")==0) {
        printf("[Ar] 3d7 4s2\n");
    }
    else if (strcmp(element,"Nickel")==0 || strcmp(element,"Ni")==0) {
        printf("[Ar] 3d8 4s2\n");
    }
    else if (strcmp(element,"Copper")==0 || strcmp(element,"Cu")==0) {
        printf("[Ar] 3d10 4s1\n");
    }
    else if (strcmp(element,"Zinc")==0 || strcmp(element,"Zn")==0) {
        printf("[Ar] 3d10 4s2\n");
    }
    else if (strcmp(element,"Gallium")==0 || strcmp(element,"Ga")==0) {
        printf("[Ar] 3d10 4s2 4p1\n");
    }
    else if (strcmp(element,"Germanium")==0 || strcmp(element,"Ge")==0) {
        printf("[Ar] 3d10 4s2 4p2\n");
    }
    else if (strcmp(element,"Arsenic")==0 || strcmp(element,"As")==0) {
        printf("[Ar] 3d10 4s2 4p3\n");
    }
    else if (strcmp(element,"Selenium")==0 || strcmp(element,"Se")==0) {
        printf("[Ar] 3d10 4s2 4p4\n");
    }
    else if (strcmp(element,"Bromine")==0 || strcmp(element,"Br")==0) {
        printf("[Ar] 3d10 4s2 4p5\n");
    }
    else if (strcmp(element,"Krypton")==0 || strcmp(element,"Kr")==0) {
        printf("[Ar] 3d10 4s2 4p6\n");
    }
    else if (strcmp(element,"Rubidium")==0 || strcmp(element,"Rb")==0) {
        printf("[Kr] 5s1\n");
    }
    else if (strcmp(element,"Strontium")==0 || strcmp(element,"Sr")==0) {
        printf("[Kr] 5s2\n");
    }
    else if (strcmp(element,"Yttrium")==0 || strcmp(element,"Y")==0) {
        printf("[Kr] 4d1 5s2\n");
    }
    else if (strcmp(element,"Zirconium")==0 || strcmp(element,"Zr")==0) {
        printf("[Kr] 4d2 5s2\n");
    }
    else if (strcmp(element,"Niobium")==0 || strcmp(element,"Nb")==0) {
        printf("[Kr] 4d4 5s1\n");
    }
    else if (strcmp(element,"Molybdenum")==0 || strcmp(element,"Mo")==0) {
        printf("[Kr] 4d5 5s1\n");
    }
    else if (strcmp(element,"Technetium")==0 || strcmp(element,"Tc")==0) {
        printf("[Kr] 4d5 5s2\n");
    }
    else if (strcmp(element,"Ruthenium")==0 || strcmp(element,"Ru")==0) {
        printf("[Kr] 4d7 5s1\n");
    }
    else if (strcmp(element,"Rhodium")==0 || strcmp(element,"Rh")==0) {
        printf("[Kr] 4d8 5s1\n");
    }
    else if (strcmp(element,"Palladium")==0 || strcmp(element,"Pd")==0) {
        printf("[Kr] 4d10\n");
    }
    else if (strcmp(element,"Silver")==0 || strcmp(element,"Ag")==0) {
        printf("[Kr] 4d10 5s1\n");
    }
    else if (strcmp(element,"Cadmium")==0 || strcmp(element,"Cd")==0) {
        printf("[Kr] 4d10 5s2\n");
    }
    else if (strcmp(element,"Indium")==0 || strcmp(element,"In")==0) {
        printf("[Kr] 4d10 5s2 5p1\n");
    }
    else if (strcmp(element,"Tin")==0 || strcmp(element,"Sn")==0) {
        printf("[Kr] 4d10 5s2 5p2\n");
    }
    else if (strcmp(element,"Antimony")==0 || strcmp(element,"Sb")==0) {
        printf("[Kr] 4d10 5s2 5p3\n");
    }
    else if (strcmp(element,"Tellurium")==0 || strcmp(element,"Te")==0) {
        printf("[Kr] 4d10 5s2 5p4\n");
    }
    else if (strcmp(element,"Iodine")==0 || strcmp(element,"I")==0) {
        printf("[Kr] 4d10 5s2 5p5\n");
    }
    else if (strcmp(element,"Xenon")==0 || strcmp(element,"Xe")==0) {
        printf("[Kr] 4d10 5s2 5p6\n");
    }
    else if (strcmp(element,"Caesium")==0 || strcmp(element,"Cs")==0) {
        printf("[Xe] 6s1\n");
    }
    else if (strcmp(element,"Barium")==0 || strcmp(element,"Ba")==0) {
        printf("[Xe] 6s2\n");
    }
    else if (strcmp(element,"Lanthanum")==0 || strcmp(element,"La")==0) {
        printf("[Xe] 5d1 6s2\n");
    }
    else if (strcmp(element,"Cerium")==0 || strcmp(element,"Ce")==0) {
        printf("[Xe] 4f1 5d1 6s2\n");
    }
    else if (strcmp(element,"Praseodymium")==0 || strcmp(element,"Pr")==0) {
        printf("[Xe] 4f3 6s2\n");
    }
    else if (strcmp(element,"Neodymium")==0 || strcmp(element,"Nd")==0) {
        printf("[Xe] 4f4 6s2\n");
    }
    else if (strcmp(element,"Promethium")==0 || strcmp(element,"Pm")==0) {
        printf("[Xe] 4f5 6s2\n");
    }
    else if (strcmp(element,"Samarium")==0 || strcmp(element,"Sm")==0) {
        printf("[Xe] 4f6 6s2\n");
    }
    else if (strcmp(element,"Europium")==0 || strcmp(element,"Eu")==0) {
        printf("[Xe] 4f7 6s2\n");
    }
    else if (strcmp(element,"Gadolinium")==0 || strcmp(element,"Gd")==0) {
        printf("[Xe] 4f7 5d1 6s2\n");
    }
    else if (strcmp(element,"Terbium")==0 || strcmp(element,"Tb")==0) {
        printf("[Xe] 4f9 6s2\n");
    }
    else if (strcmp(element,"Dysprosium")==0 || strcmp(element,"Dy")==0) {
        printf("[Xe] 4f10 6s2\n");
    }
    else if (strcmp(element,"Holmium")==0 || strcmp(element,"Ho")==0) {
        printf("[Xe] 4f11 6s2\n");
    }
    else if (strcmp(element,"Erbium")==0 || strcmp(element,"Er")==0) {
        printf("[Xe] 4f12 6s2\n");
    }
    else if (strcmp(element,"Thulium")==0 || strcmp(element,"Tm")==0) {
        printf("[Xe] 4f13 6s2\n");
    }
    else if (strcmp(element,"Ytterbium")==0 || strcmp(element,"Yb")==0) {
        printf("[Xe] 4f14 6s2\n");
    }
    else if (strcmp(element,"Lutetium")==0 || strcmp(element,"Lu")==0) {
        printf("[Xe] 4f14 5d1 6s2\n");
    }
    else if (strcmp(element,"Hafnium")==0 || strcmp(element,"Hf")==0) {
        printf("[Xe] 4f14 5d2 6s2\n");
    }
    else if (strcmp(element,"Tantalum")==0 || strcmp(element,"Ta")==0) {
        printf("[Xe] 4f14 5d3 6s2\n");
    }
    else if (strcmp(element,"Tungsten")==0 || strcmp(element,"W")==0) {
        printf("[Xe] 4f14 5d4 6s2\n");
    }
    else if (strcmp(element,"Rhenium")==0 || strcmp(element,"Re")==0) {
        printf("[Xe] 4f14 5d5 6s2\n");
    }
    else if (strcmp(element,"Osmium")==0 || strcmp(element,"Os")==0) {
        printf("[Xe] 4f14 5d6 6s2\n");
    }
    else if (strcmp(element,"Iridium")==0 || strcmp(element,"Ir")==0) {
        printf("[Xe] 4f14 5d7 6s2\n");
    }
    else if (strcmp(element,"Platinum")==0 || strcmp(element,"Pt")==0) {
        printf("[Xe] 4f14 5d9 6s1\n");
    }
    else if (strcmp(element,"Gold")==0 || strcmp(element,"Au")==0) {
        printf("[Xe] 4f14 5d10 6s1\n");
    }
    else if (strcmp(element,"Mercury")==0 || strcmp(element,"Hg")==0) {
        printf("[Xe] 4f14 5d10 6s2\n");
    }
    else if (strcmp(element,"Thallium")==0 || strcmp(element,"Tl")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p1\n");
    }
    else if (strcmp(element,"Lead")==0 || strcmp(element,"Pb")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p2\n");
    }
    else if (strcmp(element,"Bismuth")==0 || strcmp(element,"Bi")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p3\n");
    }
    else if (strcmp(element,"Polonium")==0 || strcmp(element,"Po")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p4\n");
    }
    else if (strcmp(element,"Astatine")==0 || strcmp(element,"At")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p5\n");
    }
    else if (strcmp(element,"Radon")==0 || strcmp(element,"Rn")==0) {
        printf("[Xe] 4f14 5d10 6s2 6p6\n");
    }
    else if (strcmp(element,"Francium")==0 || strcmp(element,"Fr")==0) {
        printf("[Rn] 7s1\n");
    }
    else if (strcmp(element,"Radium")==0 || strcmp(element,"Ra")==0) {
        printf("[Rn] 7s2\n");
    }
    else if (strcmp(element,"Actinium")==0 || strcmp(element,"Ac")==0) {
        printf("[Rn] 6d1 7s2\n");
    }
    else if (strcmp(element,"Thorium")==0 || strcmp(element,"Th")==0) {
        printf("[Rn] 6d2 7s2\n");
    }
    else if (strcmp(element,"Protactinium")==0 || strcmp(element,"Pa")==0) {
        printf("[Rn] 5f2 6d1 7s2\n");
    }
    else if (strcmp(element,"Uranium")==0 || strcmp(element,"U")==0) {
        printf("[Rn] 5f3 6d1 7s2\n");
    }
    else if (strcmp(element,"Neptunium")==0 || strcmp(element,"Np")==0) {
        printf("[Rn] 5f4 6d1 7s2\n");
    }
    else if (strcmp(element,"Plutonium")==0 || strcmp(element,"Pu")==0) {
        printf("[Rn] 5f6 7s2\n");
    }
    else if (strcmp(element,"Americium")==0 || strcmp(element,"Am")==0) {
        printf("[Rn] 5f7 7s2\n");
    }
    else if (strcmp(element,"Curium")==0 || strcmp(element,"Cm")==0) {
        printf("[Rn] 5f7 6d1 7s2\n");
    }
    else if (strcmp(element,"Berkelium")==0 || strcmp(element,"Bk")==0) {
        printf("[Rn] 5f9 7s2\n");
    }
    else if (strcmp(element,"Californium")==0 || strcmp(element,"Cf")==0) {
        printf("[Rn] 5f10 7s2\n");
    }
    else if (strcmp(element,"Einsteinium")==0 || strcmp(element,"Es")==0) {
        printf("[Rn] 5f11 7s2\n");
    }
    else if (strcmp(element,"Fermium")==0 || strcmp(element,"Fm")==0) {
        printf("[Rn] 5f12 7s2\n");
    }
    else if (strcmp(element,"Mendelevium")==0 || strcmp(element,"Md")==0) {
        printf("[Rn] 5f13 7s2\n");
    }
    else if (strcmp(element,"Nobelium")==0 || strcmp(element,"No")==0) {
        printf("[Rn] 5f14 7s2\n");
    }
    else if (strcmp(element,"Lawrencium")==0 || strcmp(element,"Lr")==0) {
        printf("[Rn] 5f14 6d1 7s2\n");
    }
    else if (strcmp(element,"Rutherfordium")==0 || strcmp(element,"Rf")==0) {
        printf("[Rn] 5f14 6d2 7s2\n");
    }
    else if (strcmp(element,"Dubnium")==0 || strcmp(element,"Db")==0) {
        printf("[Rn] 5f14 6d3 7s2\n");
    }
    else if (strcmp(element,"Seaborgium")==0 || strcmp(element,"Sg")==0) {
        printf("[Rn] 5f14 6d4 7s2\n");
    }
    else if (strcmp(element,"Bohrium")==0 || strcmp(element,"Bh")==0) {
        printf("[Rn] 5f14 6d5 7s2\n");
    }
    else if (strcmp(element,"Hassium")==0 || strcmp(element,"Hs")==0) {
        printf("[Rn] 5f14 6d6 7s2\n");
    }
    else if (strcmp(element,"Meitnerium")==0 || strcmp(element,"Mt")==0) {
        printf("[Rn] 5f14 6d7 7s2\n");
    }
    else if (strcmp(element,"Darmstadtium")==0 || strcmp(element,"Ds")==0) {
        printf("[Rn] 5f14 6d9 7s1\n");
    }
    else if (strcmp(element,"Roentgenium")==0 || strcmp(element,"Rg")==0) {
        printf("[Rn] 5f14 6d10 7s1\n");
    }
    else if (strcmp(element,"Copernicium")==0 || strcmp(element,"Cn")==0) {
        printf("[Rn] 5f14 6d10 7s2\n");
    }
    else if (strcmp(element,"Nihonium")==0 || strcmp(element,"Nh")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p1\n");
    }
    else if (strcmp(element,"Flerovium")==0 || strcmp(element,"Fl")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p2\n");
    }
    else if (strcmp(element,"Moscovium")==0 || strcmp(element,"Mc")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p3\n");
    }
    else if (strcmp(element,"Livermorium")==0 || strcmp(element,"Lv")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p4\n");
    }
    else if (strcmp(element,"Tennessine")==0 || strcmp(element,"Ts")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p5\n");
    }
    else if (strcmp(element,"Oganesson")==0 || strcmp(element,"Og")==0) {
        printf("[Rn] 5f14 6d10 7s2 7p6\n");
    }
    else {
        printf("Unknown element.\nNames and Initials are CasE SenSitIVE.\n");
    }
}

// @Usage : api_getAtomicNumber("Hydrogen");
// @Param : element - The name or initials of the element.
// @Brief : Prints the atomic number of the element.
/*
    Prints the atomic number of the element.
    Names and Initials are CasE SenSitIVE.
*/
void api_getAtomicNumber(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0 || strcmp(element,"H")==0) {
        printf("1\n");
    }
    else if (strcmp(element,"Helium")==0 || strcmp(element,"He")==0) {
        printf("2\n");
    }
    else if (strcmp(element,"Lithium")==0 || strcmp(element,"Li")==0) {
        printf("3\n");
    }
    else if (strcmp(element,"Beryllium")==0 || strcmp(element,"Be")==0) {
        printf("4\n");
    }
    else if (strcmp(element,"Boron")==0 || strcmp(element,"B")==0) {
        printf("5\n");
    }
    else if (strcmp(element,"Carbon")==0 || strcmp(element,"C")==0) {
        printf("6\n");
    }
    else if (strcmp(element,"Nitrogen")==0 || strcmp(element,"N")==0) {
        printf("7\n");
    }
    else if (strcmp(element,"Oxygen")==0 || strcmp(element,"O")==0) {
        printf("8\n");
    }
    else if (strcmp(element,"Fluorine")==0 || strcmp(element,"F")==0) {
        printf("9\n");
    }
    else if (strcmp(element,"Neon")==0 || strcmp(element,"Ne")==0) {
        printf("10\n");
    }
    else if (strcmp(element,"Sodium")==0 || strcmp(element,"Na")==0) {
        printf("11\n");
    }
    else if (strcmp(element,"Magnesium")==0 || strcmp(element,"Mg")==0) {
        printf("12\n");
    }
    else if (strcmp(element,"Aluminium")==0 || strcmp(element,"Al")==0) {
        printf("13\n");
    }
    else if (strcmp(element,"Silicon")==0 || strcmp(element,"Si")==0) {
        printf("14\n");
    }
    else if (strcmp(element,"Phosphorus")==0 || strcmp(element,"P")==0) {
        printf("15\n");
    }
    else if (strcmp(element,"Sulfur")==0 || strcmp(element,"S")==0) {
        printf("16\n");
    }
    else if (strcmp(element,"Chlorine")==0 || strcmp(element,"Cl")==0) {
        printf("17\n");
    }
    else if (strcmp(element,"Argon")==0 || strcmp(element,"Ar")==0) {
        printf("18\n");
    }
    else if (strcmp(element,"Potassium")==0 || strcmp(element,"K")==0) {
        printf("19\n");
    }
    else if (strcmp(element,"Calcium")==0 || strcmp(element,"Ca")==0) {
        printf("20\n");
    }
    else if (strcmp(element,"Scandium")==0 || strcmp(element,"Sc")==0) {
        printf("21\n");
    }
    else if (strcmp(element,"Titanium")==0 || strcmp(element,"Ti")==0) {
        printf("22\n");
    }
    else if (strcmp(element,"Vanadium")==0 || strcmp(element,"V")==0) {
        printf("23\n");
    }
    else if (strcmp(element,"Chromium")==0 || strcmp(element,"Cr")==0) {
        printf("24\n");
    }
    else if (strcmp(element,"Manganese")==0 || strcmp(element,"Mn")==0) {
        printf("25\n");
    }
    else if (strcmp(element,"Iron")==0 || strcmp(element,"Fe")==0) {
        printf("26\n");
    }
    else if (strcmp(element,"Cobalt")==0 || strcmp(element,"Co")==0) {
        printf("27\n");
    }
    else if (strcmp(element,"Nickel")==0 || strcmp(element,"Ni")==0) {
        printf("28\n");
    }
    else if (strcmp(element,"Copper")==0 || strcmp(element,"Cu")==0) {
        printf("29\n");
    }
    else if (strcmp(element,"Zinc")==0 || strcmp(element,"Zn")==0) {
        printf("30\n");
    }
    else if (strcmp(element,"Gallium")==0 || strcmp(element,"Ga")==0) {
        printf("31\n");
    }
    else if (strcmp(element,"Germanium")==0 || strcmp(element,"Ge")==0) {
        printf("32\n");
    }
    else if (strcmp(element,"Arsenic")==0 || strcmp(element,"As")==0) {
        printf("33\n");
    }
    else if (strcmp(element,"Selenium")==0 || strcmp(element,"Se")==0) {
        printf("34\n");
    }
    else if (strcmp(element,"Bromine")==0 || strcmp(element,"Br")==0) {
        printf("35\n");
    }
    else if (strcmp(element,"Krypton")==0 || strcmp(element,"Kr")==0) {
        printf("36\n");
    }
    else if (strcmp(element,"Rubidium")==0 || strcmp(element,"Rb")==0) {
        printf("37\n");
    }
    else if (strcmp(element,"Strontium")==0 || strcmp(element,"Sr")==0) {
        printf("38\n");
    }
    else if (strcmp(element,"Yttrium")==0 || strcmp(element,"Y")==0) {
        printf("39\n");
    }
    else if (strcmp(element,"Zirconium")==0 || strcmp(element,"Zr")==0) {
        printf("40\n");
    }
    else if (strcmp(element,"Niobium")==0 || strcmp(element,"Nb")==0) {
        printf("41\n");
    }
    else if (strcmp(element,"Molybdenum")==0 || strcmp(element,"Mo")==0) {
        printf("42\n");
    }
    else if (strcmp(element,"Technetium")==0 || strcmp(element,"Tc")==0) {
        printf("43\n");
    }
    else if (strcmp(element,"Ruthenium")==0 || strcmp(element,"Ru")==0) {
        printf("44\n");
    }
    else if (strcmp(element,"Rhodium")==0 || strcmp(element,"Rh")==0) {
        printf("45\n");
    }
    else if (strcmp(element,"Palladium")==0 || strcmp(element,"Pd")==0) {
        printf("46\n");
    }
    else if (strcmp(element,"Silver")==0 || strcmp(element,"Ag")==0) {
        printf("47\n");
    }
    else if (strcmp(element,"Cadmium")==0 || strcmp(element,"Cd")==0) {
        printf("48\n");
    }
    else if (strcmp(element,"Indium")==0 || strcmp(element,"In")==0) {
        printf("49\n");
    }
    else if (strcmp(element,"Tin")==0 || strcmp(element,"Sn")==0) {
        printf("50\n");
    }
    else if (strcmp(element,"Antimony")==0 || strcmp(element,"Sb")==0) {
        printf("51\n");
    }
    else if (strcmp(element,"Tellurium")==0 || strcmp(element,"Te")==0) {
        printf("52\n");
    }
    else if (strcmp(element,"Iodine")==0 || strcmp(element,"I")==0) {
        printf("53\n");
    }
    else if (strcmp(element,"Xenon")==0 || strcmp(element,"Xe")==0) {
        printf("54\n");
    }
    else if (strcmp(element,"Cesium")==0 || strcmp(element,"Cs")==0) {
        printf("55\n");
    }
    else if (strcmp(element,"Barium")==0 || strcmp(element,"Ba")==0) {
        printf("56\n");
    }
    else if (strcmp(element,"Lanthanum")==0 || strcmp(element,"La")==0) {
        printf("57\n");
    }
    else if (strcmp(element,"Cerium")==0 || strcmp(element,"Ce")==0) {
        printf("58\n");
    }
    else if (strcmp(element,"Praseodymium")==0 || strcmp(element,"Pr")==0) {
        printf("59\n");
    }
    else if (strcmp(element,"Neodymium")==0 || strcmp(element,"Nd")==0) {
        printf("60\n");
    }
    else if (strcmp(element,"Promethium")==0 || strcmp(element,"Pm")==0) {
        printf("61\n");
    }
    else if (strcmp(element,"Samarium")==0 || strcmp(element,"Sm")==0) {
        printf("62\n");
    }
    else if (strcmp(element,"Europium")==0 || strcmp(element,"Eu")==0) {
        printf("63\n");
    }
    else if (strcmp(element,"Gadolinium")==0 || strcmp(element,"Gd")==0) {
        printf("64\n");
    }
    else if (strcmp(element,"Terbium")==0 || strcmp(element,"Tb")==0) {
        printf("65\n");
    }
    else if (strcmp(element,"Dysprosium")==0 || strcmp(element,"Dy")==0) {
        printf("66\n");
    }
    else if (strcmp(element,"Holmium")==0 || strcmp(element,"Ho")==0) {
        printf("67\n");
    }
    else if (strcmp(element,"Erbium")==0 || strcmp(element,"Er")==0) {
        printf("68\n");
    }
    else if (strcmp(element,"Thulium")==0 || strcmp(element,"Tm")==0) {
        printf("69\n");
    }
    else if (strcmp(element,"Ytterbium")==0 || strcmp(element,"Yb")==0) {
        printf("70\n");
    }
    else if (strcmp(element,"Lutetium")==0 || strcmp(element,"Lu")==0) {
        printf("71\n");
    }
    else if (strcmp(element,"Hafnium")==0 || strcmp(element,"Hf")==0) {
        printf("72\n");
    }
    else if (strcmp(element,"Tantalum")==0 || strcmp(element,"Ta")==0) {
        printf("73\n");
    }
    else if (strcmp(element,"Tungsten")==0 || strcmp(element,"W")==0) {
        printf("74\n");
    }
    else if (strcmp(element,"Rhenium")==0 || strcmp(element,"Re")==0) {
        printf("75\n");
    }
    else if (strcmp(element,"Osmium")==0 || strcmp(element,"Os")==0) {
        printf("76\n");
    }
    else if (strcmp(element,"Iridium")==0 || strcmp(element,"Ir")==0) {
        printf("77\n");
    }
    else if (strcmp(element,"Platinum")==0 || strcmp(element,"Pt")==0) {
        printf("78\n");
    }
    else if (strcmp(element,"Gold")==0 || strcmp(element,"Au")==0) {
        printf("79\n");
    }
    else if (strcmp(element,"Mercury")==0 || strcmp(element,"Hg")==0) {
        printf("80\n");
    }
    else if (strcmp(element,"Thallium")==0 || strcmp(element,"Tl")==0) {
        printf("81\n");
    }
    else if (strcmp(element,"Lead")==0 || strcmp(element,"Pb")==0) {
        printf("82\n");
    }
    else if (strcmp(element,"Bismuth")==0 || strcmp(element,"Bi")==0) {
        printf("83\n");
    }
    else if (strcmp(element,"Polonium")==0 || strcmp(element,"Po")==0) {
        printf("84\n");
    }
    else if (strcmp(element,"Astatine")==0 || strcmp(element,"At")==0) {
        printf("85\n");
    }
    else if (strcmp(element,"Radon")==0 || strcmp(element,"Rn")==0) {
        printf("86\n");
    }
    else if (strcmp(element,"Francium")==0 || strcmp(element,"Fr")==0) {
        printf("87\n");
    }
    else if (strcmp(element,"Radium")==0 || strcmp(element,"Ra")==0) {
        printf("88\n");
    }
    else if (strcmp(element,"Actinium")==0 || strcmp(element,"Ac")==0) {
        printf("89\n");
    }
    else if (strcmp(element,"Thorium")==0 || strcmp(element,"Th")==0) {
        printf("90\n");
    }
    else if (strcmp(element,"Protactinium")==0 || strcmp(element,"Pa")==0) {
        printf("91\n");
    }
    else if (strcmp(element,"Uranium")==0 || strcmp(element,"U")==0) {
        printf("92\n");
    }
    else if (strcmp(element,"Neptunium")==0 || strcmp(element,"Np")==0) {
        printf("93\n");
    }
    else if (strcmp(element,"Plutonium")==0 || strcmp(element,"Pu")==0) {
        printf("94\n");
    }
    else if (strcmp(element,"Americium")==0 || strcmp(element,"Am")==0) {
        printf("95\n");
    }
    else if (strcmp(element,"Curium")==0 || strcmp(element,"Cm")==0) {
        printf("96\n");
    }
    else if (strcmp(element,"Berkelium")==0 || strcmp(element,"Bk")==0) {
        printf("97\n");
    }
    else if (strcmp(element,"Californium")==0 || strcmp(element,"Cf")==0) {
        printf("98\n");
    }
    else if (strcmp(element,"Einsteinium")==0 || strcmp(element,"Es")==0) {
        printf("99\n");
    }
    else if (strcmp(element,"Fermium")==0 || strcmp(element,"Fm")==0) {
        printf("100\n");
    }
    else if (strcmp(element,"Mendelevium")==0 || strcmp(element,"Md")==0) {
        printf("101\n");
    }
    else if (strcmp(element,"Nobelium")==0 || strcmp(element,"No")==0) {
        printf("102\n");
    }
    else if (strcmp(element,"Lawrencium")==0 || strcmp(element,"Lr")==0) {
        printf("103\n");
    }
    else if (strcmp(element,"Rutherfordium")==0 || strcmp(element,"Rf")==0) {
        printf("104\n");
    }
    else if (strcmp(element,"Dubnium")==0 || strcmp(element,"Db")==0) {
        printf("105\n");
    }
    else if (strcmp(element,"Seaborgium")==0 || strcmp(element,"Sg")==0) {
        printf("106\n");
    }
    else if (strcmp(element,"Bohrium")==0 || strcmp(element,"Bh")==0) {
        printf("107\n");
    }
    else if (strcmp(element,"Hassium")==0 || strcmp(element,"Hs")==0) {
        printf("108\n");
    }
    else if (strcmp(element,"Meitnerium")==0 || strcmp(element,"Mt")==0) {
        printf("109\n");
    }
    else if (strcmp(element,"Darmstadtium")==0 || strcmp(element,"Ds")==0) {
        printf("110\n");
    }
    else if (strcmp(element,"Roentgenium")==0 || strcmp(element,"Rg")==0) {
        printf("111\n");
    }
    else if (strcmp(element,"Copernicium")==0 || strcmp(element,"Cn")==0) {
        printf("112\n");
    }
    else if (strcmp(element,"Nihonium")==0 || strcmp(element,"Nh")==0) {
        printf("113\n");
    }
    else if (strcmp(element,"Flerovium")==0 || strcmp(element,"Fl")==0) {
        printf("114\n");
    }
    else if (strcmp(element,"Moscovium")==0 || strcmp(element,"Mc")==0) {
        printf("115\n");
    }
    else if (strcmp(element,"Livermorium")==0 || strcmp(element,"Lv")==0) {
        printf("116\n");
    }
    else if (strcmp(element,"Tennessine")==0 || strcmp(element,"Ts")==0) {
        printf("117\n");
    }
    else if (strcmp(element,"Oganesson")==0 || strcmp(element,"Og")==0) {
        printf("118\n");
    }
    else {
        printf("Unknown element.\nNames and Initials are CasE SenSitIVE.\n");
    }
}

// @Usage : api_getMolarMass("1");
// @Param : element - The element to get the molar mass of. (int) atoms - The number of atoms. (int)
// @Brief : Returns the molar mass of the element.
void api_getMolarMass(int element, int atoms) {
    printf("%d",relativeAtomic[element]*atoms);
}

// @Usage : api_getElectronConfig("Hydrogen");
// @Param : element - The element to get the electron configuration of.
// @Brief : Returns the electron configuration of the element.
/*
    Returns the electrons configuration of the element.
    The electron configuration is returned as a string.
*/
void api_getElectronConfig(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0 || strcmp(element,"H")==0) {
        printf("1s1\n");
    }
    else if (strcmp(element,"Helium")==0 || strcmp(element,"He")==0) {
        printf("1s2\n");
    }
    else if (strcmp(element,"Lithium")==0 || strcmp(element,"Li")==0) {
        printf("1s2 2s1\n");
    }
    else if (strcmp(element,"Beryllium")==0 || strcmp(element,"Be")==0) {
        printf("1s2 2s2\n");
    }
    else if (strcmp(element,"Boron")==0 || strcmp(element,"B")==0) {
        printf("1s2 2s2 2p1\n");
    }
    else if (strcmp(element,"Carbon")==0 || strcmp(element,"C")==0) {
        printf("1s2 2s2 2p2\n");
    }
    else if (strcmp(element,"Nitrogen")==0 || strcmp(element,"N")==0) {
        printf("1s2 2s2 2p3\n");
    }
    else if (strcmp(element,"Oxygen")==0 || strcmp(element,"O")==0) {
        printf("1s2 2s2 2p4\n");
    }
    else if (strcmp(element,"Fluorine")==0 || strcmp(element,"F")==0) {
        printf("1s2 2s2 2p5\n");
    }
    else if (strcmp(element,"Neon")==0 || strcmp(element,"Ne")==0) {
        printf("1s2 2s2 2p6\n");
    }
    else if (strcmp(element,"Sodium")==0 || strcmp(element,"Na")==0) {
        printf("1s2 2s2 2p6 3s1\n");
    }
    else if (strcmp(element,"Magnesium")==0 || strcmp(element,"Mg")==0) {
        printf("1s2 2s2 2p6 3s2\n");
    }
    else if (strcmp(element,"Aluminium")==0 || strcmp(element,"Al")==0) {
        printf("1s2 2s2 2p6 3s2 3p1\n");
    }
    else if (strcmp(element,"Silicon")==0 || strcmp(element,"Si")==0) {
        printf("1s2 2s2 2p6 3s2 3p2\n");
    }
    else if (strcmp(element,"Phosphorus")==0 || strcmp(element,"P")==0) {
        printf("1s2 2s2 2p6 3s2 3p3\n");
    }
    else if (strcmp(element,"Sulfur")==0 || strcmp(element,"S")==0) {
        printf("1s2 2s2 2p6 3s2 3p4\n");
    }
    else if (strcmp(element,"Chlorine")==0 || strcmp(element,"Cl")==0) {
        printf("1s2 2s2 2p6 3s2 3p5\n");
    }
    else if (strcmp(element,"Argon")==0 || strcmp(element,"Ar")==0) {
        printf("1s2 2s2 2p6 3s2 3p6\n");
    }
    else if (strcmp(element,"Potassium")==0 || strcmp(element,"K")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 4s1\n");
    }
    else if (strcmp(element,"Calcium")==0 || strcmp(element,"Ca")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 4s2\n");
    }
    else if (strcmp(element,"Scandium")==0 || strcmp(element,"Sc")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d1 4s2\n");
    }
    else if (strcmp(element,"Titanium")==0 || strcmp(element,"Ti")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d2 4s2\n");
    }
    else if (strcmp(element,"Vanadium")==0 || strcmp(element,"V")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d3 4s2\n");
    }
    else if (strcmp(element,"Chromium")==0 || strcmp(element,"Cr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d5 4s1\n");
    }
    else if (strcmp(element,"Manganese")==0 || strcmp(element,"Mn")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d5 4s2\n");
    }
    else if (strcmp(element,"Iron")==0 || strcmp(element,"Fe")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d6 4s2\n");
    }
    else if (strcmp(element,"Cobalt")==0 || strcmp(element,"Co")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d7 4s2\n");
    }
    else if (strcmp(element,"Nickel")==0 || strcmp(element,"Ni")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d8 4s2\n");
    }
    else if (strcmp(element,"Copper")==0 || strcmp(element,"Cu")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s1\n");
    }
    else if (strcmp(element,"Zinc")==0 || strcmp(element,"Zn")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2\n");
    }
    else if (strcmp(element,"Gallium")==0 || strcmp(element,"Ga")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p1\n");
    }
    else if (strcmp(element,"Germanium")==0 || strcmp(element,"Ge")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p2\n");
    }
    else if (strcmp(element,"Arsenic")==0 || strcmp(element,"As")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p3\n");
    }
    else if (strcmp(element,"Selenium")==0 || strcmp(element,"Se")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p4\n");
    }
    else if (strcmp(element,"Bromine")==0 || strcmp(element,"Br")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p5\n");
    }
    else if (strcmp(element,"Krypton")==0 || strcmp(element,"Kr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6\n");
    }
    else if (strcmp(element,"Rubidium")==0 || strcmp(element,"Rb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 5s1\n");
    }
    else if (strcmp(element,"Strontium")==0 || strcmp(element,"Sr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 5s2\n");
    }
    else if (strcmp(element,"Yttrium")==0 || strcmp(element,"Y")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d1 5s2\n");
    }
    else if (strcmp(element,"Zirconium")==0 || strcmp(element,"Zr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d2 5s2\n");
    }
    else if (strcmp(element,"Niobium")==0 || strcmp(element,"Nb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d4 5s1\n");
    }
    else if (strcmp(element,"Molybdenum")==0 || strcmp(element,"Mo")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d5 5s1\n");
    }
    else if (strcmp(element,"Technetium")==0 || strcmp(element,"Tc")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d5 5s2\n");
    }
    else if (strcmp(element,"Ruthenium")==0 || strcmp(element,"Ru")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d7 5s1\n");
    }
    else if (strcmp(element,"Rhodium")==0 || strcmp(element,"Rh")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d8 4s1 4p6 4d8 5s1\n");
    }
    else if (strcmp(element,"Palladium")==0 || strcmp(element,"Pd")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10\n");
    }
    else if (strcmp(element,"Silver")==0 || strcmp(element,"Ag")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s1 4p6 4d10 5s1\n");
    }
    else if (strcmp(element,"Cadmium")==0 || strcmp(element,"Cd")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2\n");
    }
    else if (strcmp(element,"Indium")==0 || strcmp(element,"In")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p1\n");
    }
    else if (strcmp(element,"Tin")==0 || strcmp(element,"Sn")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p2\n");
    }
    else if (strcmp(element,"Antimony")==0 || strcmp(element,"Sb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p3\n");
    }
    else if (strcmp(element,"Tellurium")==0 || strcmp(element,"Te")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p4\n");
    }
    else if (strcmp(element,"Iodine")==0 || strcmp(element,"I")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p5\n");
    }
    else if (strcmp(element,"Xenon")==0 || strcmp(element,"Xe")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6\n");
    }
    else if (strcmp(element,"Caesium")==0 || strcmp(element,"Cs")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s1\n");
    }
    else if (strcmp(element,"Barium")==0 || strcmp(element,"Ba")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2\n");
    }
    else if (strcmp(element,"Lanthanum")==0 || strcmp(element,"La")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p1\n");
    }
    else if (strcmp(element,"Cerium")==0 || strcmp(element,"Ce")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p2\n");
    }
    else if (strcmp(element,"Praseodymium")==0 || strcmp(element,"Pr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p3\n");
    }
    else if (strcmp(element,"Neodymium")==0 || strcmp(element,"Nd")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p4\n");
    }
    else if (strcmp(element,"Promethium")==0 || strcmp(element,"Pm")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p5\n");
    }
    else if (strcmp(element,"Samarium")==0 || strcmp(element,"Sm")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p6\n");
    }
    else if (strcmp(element,"Europium")==0 || strcmp(element,"Eu")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p7\n");
    }
    else if (strcmp(element,"Gadolinium")==0 || strcmp(element,"Gd")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p8\n");
    }
    else if (strcmp(element,"Terbium")==0 || strcmp(element,"Tb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p9\n");
    }
    else if (strcmp(element,"Dysprosium")==0 || strcmp(element,"Dy")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p10\n");
    }
    else if (strcmp(element,"Holmium")==0 || strcmp(element,"Ho")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p11\n");
    }
    else if (strcmp(element,"Erbium")==0 || strcmp(element,"Er")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p12\n");
    }
    else if (strcmp(element,"Thulium")==0 || strcmp(element,"Tm")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p13\n");
    }
    else if (strcmp(element,"Ytterbium")==0 || strcmp(element,"Yb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p14\n");
    }
    else if (strcmp(element,"Lutetium")==0 || strcmp(element,"Lu")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 6s2 6p15\n");
    }
    else if (strcmp(element,"Hafnium")==0 || strcmp(element,"Hf")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2\n");
    }
    else if (strcmp(element,"Tantalum")==0 || strcmp(element,"Ta")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p1\n");
    }
    else if (strcmp(element,"Tungsten")==0 || strcmp(element,"W")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p2\n");
    }
    else if (strcmp(element,"Rhenium")==0 || strcmp(element,"Re")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p3\n");
    }
    else if (strcmp(element,"Osmium")==0 || strcmp(element,"Os")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p4\n");
    }
    else if (strcmp(element,"Iridium")==0 || strcmp(element,"Ir")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p5\n");
    }
    else if (strcmp(element,"Platinum")==0 || strcmp(element,"Pt")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s1 6p6\n");
    }
    else if (strcmp(element,"Gold")==0 || strcmp(element,"Au")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s1 6p7\n");
    }
    else if (strcmp(element,"Mercury")==0 || strcmp(element,"Hg")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 6s2 6p6\n");
    }
    else if (strcmp(element,"Thallium")==0 || strcmp(element,"Tl")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p1\n");
    }
    else if (strcmp(element,"Lead")==0 || strcmp(element,"Pb")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p2\n");
    }
    else if (strcmp(element,"Bismuth")==0 || strcmp(element,"Bi")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p3\n");
    }
    else if (strcmp(element,"Polonium")==0 || strcmp(element,"Po")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p4\n");
    }
    else if (strcmp(element,"Astatine")==0 || strcmp(element,"At")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p5\n");
    }
    else if (strcmp(element,"Radon")==0 || strcmp(element,"Rn")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6\n");
    }
    else if (strcmp(element,"Francium")==0 || strcmp(element,"Fr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s1\n");
    }
    else if (strcmp(element,"Radium")==0 || strcmp(element,"Ra")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2\n");
    }
    else if (strcmp(element,"Actinium")==0 || strcmp(element,"Ac")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p1\n");
    }
    else if (strcmp(element,"Thorium")==0 || strcmp(element,"Th")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p2\n");
    }
    else if (strcmp(element,"Protactinium")==0 || strcmp(element,"Pa")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p3\n");
    }
    else if (strcmp(element,"Uranium")==0 || strcmp(element,"U")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p4\n");
    }
    else if (strcmp(element,"Neptunium")==0 || strcmp(element,"Np")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p5\n");
    }
    else if (strcmp(element,"Plutonium")==0 || strcmp(element,"Pu")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p6\n");
    }
    else if (strcmp(element,"Americium")==0 || strcmp(element,"Am")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p7\n");
    }
    else if (strcmp(element,"Curium")==0 || strcmp(element,"Cm")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p8\n");
    }
    else if (strcmp(element,"Berkelium")==0 || strcmp(element,"Bk")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p9\n");
    }
    else if (strcmp(element,"Californium")==0 || strcmp(element,"Cf")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p10\n");
    }
    else if (strcmp(element,"Einsteinium")==0 || strcmp(element,"Es")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p11\n");
    }
    else if (strcmp(element,"Fermium")==0 || strcmp(element,"Fm")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p12\n");
    }
    else if (strcmp(element,"Mendelevium")==0 || strcmp(element,"Md")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p13\n");
    }
    else if (strcmp(element,"Nobelium")==0 || strcmp(element,"No")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p14\n");
    }
    else if (strcmp(element,"Lawrencium")==0 || strcmp(element,"Lr")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p15\n");
    }
    else if (strcmp(element,"Rutherfordium")==0 || strcmp(element,"Rf")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p16 7d1\n");
    }
    else if (strcmp(element,"Dubnium")==0 || strcmp(element,"Db")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p17 7d1\n");
    }
    else if (strcmp(element,"Seaborgium")==0 || strcmp(element,"Sg")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p18 7d1\n");
    }
    else if (strcmp(element,"Bohrium")==0 || strcmp(element,"Bh")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p19 7d1\n");
    }
    else if (strcmp(element,"Hassium")==0 || strcmp(element,"Hs")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p20 7d1\n");
    }
    else if (strcmp(element,"Meitnerium")==0 || strcmp(element,"Mt")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p21 7d1\n");
    }
    else if (strcmp(element,"Darmstadtium")==0 || strcmp(element,"Ds")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p22 7d1\n");
    }
    else if (strcmp(element,"Roentgenium")==0 || strcmp(element,"Rg")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p23 7d1\n");
    }
    else if (strcmp(element,"Copernicium")==0 || strcmp(element,"Cn")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p24 7d1\n");
    }
    else if (strcmp(element,"Nihonium")==0 || strcmp(element,"Nh")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p25 7d1\n");
    }
    else if (strcmp(element,"Flerovium")==0 || strcmp(element,"Fl")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p26 7d1\n");
    }
    else if (strcmp(element,"Moscovium")==0 || strcmp(element,"Mc")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p27 7d1\n");
    }
    else if (strcmp(element,"Livermorium")==0 || strcmp(element,"Lv")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p28 7d1\n");
    }
    else if (strcmp(element,"Tennessine")==0 || strcmp(element,"Ts")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p29 7d1\n");
    }
    else if (strcmp(element,"Oganesson")==0 || strcmp(element,"Og")==0) {
        printf("1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p6 4d10 5s2 5p6 4f14 5d10 6s2 6p6 7s2 7p30 7d1\n");
    }
    else {
        printf("Unknown element.\nNames are CasE SenSitIVE.\n");
    }
}
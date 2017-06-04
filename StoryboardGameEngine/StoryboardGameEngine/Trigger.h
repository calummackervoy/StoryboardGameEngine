
const int MAX_OUTCOMES = 8;
const int MAX_REQS = 4;

struct Resource {
    int id;
    string name = "undefined";
    string description = "undefined";
    bool inPossession = false;
};

class Trigger {
public:
    Trigger();
    ~Trigger();

    //function evaluates if a trigger can be made
    bool evaluate();

    inline Outcome getOutcome(int id) { return outcomes[id]; };
    int addOutcome(Outcome o);

    inline Resource getRequirement(int id) { return requiredResources[id]; };
    int addRequirement(Resource r);

    inline int getId() {return id;};
    inline void setId(int val) {id = val;};

private:
    Outcome outcomes[MAX_OUTCOMES];
    Resource requiredResources[MAX_REQS];
    int id;
}
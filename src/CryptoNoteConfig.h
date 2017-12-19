const char CRYPTONOTE_NAME[] = "NewtonCoin";
const uint64_t MONEY_SUPPLY = (uint64_t)(1000);
const unsigned EMISSION_SPEED_FACTOR = 18;
const uint64_t DIFFICULTY_TARGET = 120;
const int P2P_DEFAULT_PORT = 37009;
const int RPC_DEFAULT_PORT = 37476;
const std::initializer_list<const char*> SEED_NODES = {
  "111.11.11.11:37009",
  "222.22.22.22:37476",
};
const uint64_t MINIMUM_FEE = 100000;
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE = 20000;

#ifndef BXDECAY0_RN222_H
#define BXDECAY0_RN222_H

namespace bxdecay0 {

  class i_random;
  class event;

  void Rn222(i_random & prng_, event & event_, const double tcnuc_, double & tdnuc_);

} // end of namespace bxdecay0

#endif // BXDECAY0_RN222_H

// Local Variables: --
// mode: c++ --
// End: --

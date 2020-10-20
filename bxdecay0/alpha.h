#ifndef BXDECAY0_ALPHA_H
#define BXDECAY0_ALPHA_H 1

namespace bxdecay0 {

  class i_random;
  class event;

  // Generation of emission of alpha with fixed energy
  // isotropically in the whole space.
  //         call alpha(E,tclev,thlev,tdlev)
  // Input : energy     - kinetic energy of particle (MeV);
  //         tclev - time of creation of level from which particle will be
  //                 emitted (sec);
  //         thlev - level halflife (sec).
  // Output: tdlev               - time of decay of level (sec);
  void decay0_alpha(i_random & prng_, event & event_, double energy_, double tclev_, double thlev_, double & tdlev_);

} // end of namespace bxdecay0

#endif // BXDECAY0_ALPHA_H

// Local Variables: --
// mode: c++ --
// End: --

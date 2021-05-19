#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

class TacticalMarine {
 public:
  TacticalMarine(void);
  TacticalMarine(const TacticalMarine& tacticalMarine);
  virtual ~TacticalMarine(void);

  TacticalMarine& operator = (const TacticalMarine& tacticalMarine);
};

#endif

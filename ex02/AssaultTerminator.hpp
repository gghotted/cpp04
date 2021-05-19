#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

class AssaultTerminator {
 public:
  AssaultTerminator(void);
  AssaultTerminator(const AssaultTerminator& assaultTerminator);
  virtual ~AssaultTerminator(void);

  AssaultTerminator& operator = (const AssaultTerminator& assaultTerminator);
};

#endif

#ifndef LIGHTNING_HSMD_PERMISSIONS_H
#define LIGHTNING_HSMD_PERMISSIONS_H
#include "config.h"

#define HSM_PERM_ECDH 1
#define HSM_PERM_SIGN_GOSSIP 2
#define HSM_PERM_SIGN_ONCHAIN_TX 4
#define HSM_PERM_COMMITMENT_POINT 8
#define HSM_PERM_SIGN_REMOTE_TX 16
#define HSM_PERM_SIGN_CLOSING_TX 32
#define HSM_PERM_SIGN_WILL_FUND_OFFER 64
#define HSM_PERM_SIGN_SPLICE_TX 128

#define HSM_PERM_MASTER 1024
#endif /* LIGHTNING_HSMD_PERMISSIONS_H */

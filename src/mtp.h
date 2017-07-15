//
// Created by aizen on 4/09/17.
//

#ifndef ZCOIN_MTP_H
#define ZCOIN_MTP_H

#endif //ZCOIN_MTP_H

#include <openssl/sha.h>

#include "main.h"
#include "argon2/core.h"
#include "argon2/argon2.h"
#include "argon2/thread.h"
#include "argon2/blake2/blake2.h"
#include "argon2/blake2/blake2-impl.h"
#include "argon2/blake2/blamka-round-opt.h"

bool mtp_hash(uint256* output, const char* input, uint256 hashTarget, CBlock *pblock);

bool mtp_verifier(uint256 hashTarget, CBlock *pblock, uint256 *yL);

bool mtp_verifier(uint256 hashTarget, uint256 mtpMerkleRoot, unsigned int nNonce,const block_with_offset blockhashInBlockchain[210], uint256 *yL);

#ifndef DONATE_H
#define DONATE_H

/*
* Minimum dev donation.
* Minimum percentage of your hashing power that you want to donate to the
* developer, can be 0 if you prefer not to.
* You can set the donation percentage higher by using the --donate flag.
*
* Example of how it works for the default setting of 1:
* You miner will mine into your usual pool for 99 minutes, then switch to the
* developer's pool for 1 minute.
*
* If you plan on changing this setting to 0 please consider making a one-time
* donation to the developers' wallets:
*
* tpruvot (ccminer)
* BTC donation address: 1AJdfCpLWPNoAMDfHF1wD5y8VgKSSTHxPo
*
* Pigeoncoin
* BTC donation address: 1NaVP4cKiWY6MxSDkTCZ2kh5Xm3coA27Qv
* PGN donation address: PDiZ89gk5HMqwrcGp6Hs9WdgFALzLbD4HG
*
*/
#define MIN_DEV_DONATE_PERCENT 1


// 100 minutes
#define DONATE_CYCLE_TIME 6000

#endif

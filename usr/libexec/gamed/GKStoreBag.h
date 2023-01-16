//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKActivity, GKDispatchGroup, NSData, NSDate, NSDictionary, NSError, NSNumber, NSSet, NSURL;
@protocol OS_dispatch_queue;

@interface GKStoreBag : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    GKDispatchGroup *_fetchGroup;	// 16 = 0x10
    int _playerIDHashMod;	// 24 = 0x18
    int _playerIDHashAdd;	// 28 = 0x1c
    NSURL *_url;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSSet *_APNSRequired;	// 48 = 0x30
    NSSet *_signatureRequired;	// 56 = 0x38
    NSSet *_responseSignatureRequired;	// 64 = 0x40
    NSNumber *_metricsPassthroughPercentage;	// 72 = 0x48
    NSData *_mockSAPSign;	// 80 = 0x50
    NSDictionary *_internalBag;	// 88 = 0x58
    NSDate *_expiration;	// 96 = 0x60
    double _mescalSetupStartTimeStamp;	// 104 = 0x68
    GKActivity *_activity;	// 112 = 0x70
}

+ (void)addAuthHeadersToRequest:(id)arg1;	// IMP=0x00400000000cc176
+ (id)deviceInfo;	// IMP=0x00100000000cc0ff
+ (id)appleIdSession;	// IMP=0x00100000000cc0a3
+ (id)mockSignURLForEnvironment:(long long)arg1;	// IMP=0x00100000000cb6c9
+ (id)storeBagURLForEnvironment:(long long)arg1;	// IMP=0x00100000000ca6f3
+ (id)storeBagForURL:(id)arg1;	// IMP=0x00100000000c8a1d
+ (id)storeBagForEnvironment:(long long)arg1;	// IMP=0x00100000000c89e0
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) double mescalSetupStartTimeStamp; // @synthesize mescalSetupStartTimeStamp=_mescalSetupStartTimeStamp;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
// Error: Property attributes should begin with the type ('T') attribute, property name: internalBag
// Property attributes: (null)

@property(retain) NSData *mockSAPSign; // @synthesize mockSAPSign=_mockSAPSign;
@property(retain, nonatomic) NSNumber *metricsPassthroughPercentage; // @synthesize metricsPassthroughPercentage=_metricsPassthroughPercentage;
@property(retain) NSSet *responseSignatureRequired; // @synthesize responseSignatureRequired=_responseSignatureRequired;
@property(retain) NSSet *signatureRequired; // @synthesize signatureRequired=_signatureRequired;
@property(retain) NSSet *APNSRequired; // @synthesize APNSRequired=_APNSRequired;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)readDataForURL:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 includeUDID:(_Bool)arg5 includeAPNS:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000cf386
- (void)readDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cf115
- (void)writeDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000cef03
- (void)_loadDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cd9a9
- (id)_networkSynchonizationQueue;	// IMP=0x00100000000cd95d
- (_Bool)isLoadValidForBagKey:(id)arg1 date:(id)arg2;	// IMP=0x00100000000cd8fa
- (void)invalidateBagKeys:(id)arg1;	// IMP=0x00100000000cd74a
- (id)_bagKeyValidationDict;	// IMP=0x00100000000cd6ee
- (void)_sendOneAsyncTryWithRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 session:(id)arg3 retryCount:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000cc3d5
- (void)_sendAsynchronousRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cc23b
- (id)requestWithURL:(id)arg1 method:(id)arg2 playerID:(id)arg3 authToken:(id)arg4 pushToken:(id)arg5 client:(id)arg6 postData:(id)arg7 includeUDID:(_Bool)arg8 includeAPNS:(_Bool)arg9 sapSession:(id)arg10;	// IMP=0x00100000000cbf62
- (void)signRequest:(id)arg1 sapSession:(id)arg2 postData:(id)arg3;	// IMP=0x00100000000cbef5
- (int)hashForPlayerID:(id)arg1;	// IMP=0x00100000000cbebc
- (void)_updatePlayerIDHashParameters;	// IMP=0x00100000000cbdf6
- (void)updateURLPatternCache;	// IMP=0x00100000000cb706
- (id)_storeBagForData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000cb2aa
- (long long)_scoresThrottleThreshold;	// IMP=0x00100000000cb267
- (long long)scoresThrottleThreshold;	// IMP=0x00100000000cb199
- (long long)_achievementsThrottleThreshold;	// IMP=0x00100000000cb156
- (long long)achievementsThrottleThreshold;	// IMP=0x00100000000cb088
- (long long)_gkSessionRateLimiting;	// IMP=0x00100000000cb045
- (long long)gkSessionRateLimiting;	// IMP=0x00100000000caf77
- (_Bool)_shouldUseHTTPPipelining;	// IMP=0x00100000000caf10
- (_Bool)shouldUseHTTPPipelining;	// IMP=0x00100000000cae41
- (id)omnitureQueryParametersForContext:(id)arg1;	// IMP=0x00100000000cadfa
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00100000000cac71
- (void)getValuesForKeys:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000caa67
- (void)getURLForKey:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ca808
- (void)_setupResponseSignatureRequired:(id)arg1;	// IMP=0x00100000000ca668
- (void)_metricsThrottleThreshold:(id)arg1;	// IMP=0x00100000000ca62a
- (void)_setupSignatureRequired:(id)arg1;	// IMP=0x00100000000ca59f
- (void)_setupAPNSRequired:(id)arg1;	// IMP=0x00100000000ca45a
- (void)getBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ca206
- (void)_fetchBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9bbb
- (void)_fetchFromServerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9322
- (void)_fetchFromCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c8eaf
- (_Bool)_isLastProtocolVersionUsedValid;	// IMP=0x00100000000c8e3e
- (_Bool)_isFetching;	// IMP=0x00100000000c8e30
- (_Bool)_isValidAndNotExpired;	// IMP=0x00100000000c8dea
- (_Bool)_isValid;	// IMP=0x00100000000c8dcd
- (_Bool)_isExpired;	// IMP=0x00100000000c8dab
- (void)dealloc;	// IMP=0x00100000000c8d20
- (id)initWithURL:(id)arg1;	// IMP=0x00100000000c8c83
- (id)description;	// IMP=0x00100000000c8969
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c8958
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c884c

@end


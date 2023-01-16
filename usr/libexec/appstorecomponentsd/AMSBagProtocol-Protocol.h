//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ACAccount, AMSBagValue, AMSProcessInfo, NSDate, NSString;

@protocol AMSBagProtocol <NSObject>
- (AMSBagValue *)dictionaryForKey:(NSString *)arg1;
- (AMSBagValue *)URLForKey:(NSString *)arg1;
- (AMSBagValue *)stringForKey:(NSString *)arg1;
- (AMSBagValue *)integerForKey:(NSString *)arg1;
- (AMSBagValue *)doubleForKey:(NSString *)arg1;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))arg1;
- (AMSBagValue *)boolForKey:(NSString *)arg1;
- (AMSBagValue *)arrayForKey:(NSString *)arg1;
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;

@optional
- (AMSBagValue *)URLForKey:(NSString *)arg1 account:(ACAccount *)arg2;
@property(nonatomic, readonly) AMSProcessInfo *processInfo;

// Remaining properties
@property(nonatomic, readonly) _Bool expired;
@end


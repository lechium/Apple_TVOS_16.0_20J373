//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtC9storekitd3Bag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
}

+ (id)xcodeBagWithBundleId:(id)arg1;	// IMP=0x00200000000a6050
+ (void)setSandboxBag:(id)arg1;	// IMP=0x00100000000a5fc0
+ (id)sandboxBag;	// IMP=0x00100000000a5f60
+ (void)setDefaultBag:(id)arg1;	// IMP=0x00100000000a5ed0
+ (id)defaultBag;	// IMP=0x00100000000a5eb0
- (void).cxx_destruct;	// IMP=0x00400000000a71e0
- (id)init;	// IMP=0x00100000000a7190
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00100000000a7130
- (id)URLForKey:(id)arg1;	// IMP=0x00100000000a6460
- (id)stringForKey:(id)arg1;	// IMP=0x00100000000a6440
- (id)integerForKey:(id)arg1;	// IMP=0x00100000000a6420
- (id)doubleForKey:(id)arg1;	// IMP=0x00100000000a6400
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a6310
- (id)boolForKey:(id)arg1;	// IMP=0x00100000000a6270
- (id)arrayForKey:(id)arg1;	// IMP=0x00100000000a6250
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x00100000000a5d60
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end


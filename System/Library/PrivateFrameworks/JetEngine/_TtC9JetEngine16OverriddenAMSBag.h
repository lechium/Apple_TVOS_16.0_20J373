//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSSnapshotBag.h>

@class MISSING_TYPE, NSDate, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine16OverriddenAMSBag : AMSSnapshotBag
{
    MISSING_TYPE *backing;	// 8 = 0x8
    MISSING_TYPE *overrides;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000192130
- (id)initWithData:(id)arg1;	// IMP=0x0000000000192a80
- (id)init;	// IMP=0x0000000000192a50
@property(nonatomic, readonly) id <AMSBagProtocol> replacingSnapshotIfNeeded;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000192770
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000001926c0
- (id)URLForKey:(id)arg1;	// IMP=0x00000000001925e0
- (id)stringForKey:(id)arg1;	// IMP=0x00000000001925c0
- (id)integerForKey:(id)arg1;	// IMP=0x00000000001925a0
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000000192580
- (id)boolForKey:(id)arg1;	// IMP=0x00000000001924f0
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000001924d0
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x00000000001922d0
- (void)forwardSnapshotBagExpiredValueAccessed:(id)arg1;	// IMP=0x0000000000192230
- (void)dealloc;	// IMP=0x0000000000192090

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtCC9storekitd3BagP33_548B24E65CA9FE1CAECE2177332C57EA8XcodeBag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
    MISSING_TYPE *isExpired;	// 16 = 0x10
    MISSING_TYPE *expirationDate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000a7f90
- (id)init;	// IMP=0x00100000000a7f10
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00100000000a7a60
- (id)URLForKey:(id)arg1;	// IMP=0x00100000000a7a50
- (id)stringForKey:(id)arg1;	// IMP=0x00100000000a7a40
- (id)integerForKey:(id)arg1;	// IMP=0x00100000000a7a30
- (id)doubleForKey:(id)arg1;	// IMP=0x00100000000a7a20
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a79c0
- (id)boolForKey:(id)arg1;	// IMP=0x00100000000a79b0
- (id)arrayForKey:(id)arg1;	// IMP=0x00100000000a79a0
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, copy) NSDate *expirationDate;
@property(nonatomic) _Bool expired; // @synthesize expired=isExpired;
- (_Bool)isExpired;	// IMP=0x00100000000a7710

@end


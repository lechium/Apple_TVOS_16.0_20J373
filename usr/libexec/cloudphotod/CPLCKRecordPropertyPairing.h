//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CPLCKRecordPropertyPairing : NSObject
{
    NSMutableArray *_ckKeys;	// 8 = 0x8
    NSArray *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000dcc85
@property(readonly, nonatomic) NSArray *ckKeys; // @synthesize ckKeys=_ckKeys;
@property(readonly, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000dcb6c
- (unsigned long long)hash;	// IMP=0x00100000000dcb56
- (id)description;	// IMP=0x00100000000dcaa8
- (_Bool)hasCKKey:(id)arg1;	// IMP=0x00100000000dca92
- (_Bool)hasProperty:(id)arg1;	// IMP=0x00100000000dca7c
- (void)addCKKeys:(id)arg1;	// IMP=0x00100000000dca66
- (id)initWithProperty:(id)arg1 andKeys:(id)arg2;	// IMP=0x00100000000dc98b
- (id)initWithProperties:(id)arg1;	// IMP=0x00100000000dc8df

@end


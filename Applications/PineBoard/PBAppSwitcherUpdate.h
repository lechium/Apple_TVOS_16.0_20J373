//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, PBAppSwitcherItem;

@interface PBAppSwitcherUpdate : NSObject
{
    long long _type;	// 8 = 0x8
    PBAppSwitcherItem *_item;	// 16 = 0x10
    NSIndexPath *_fromIndexPath;	// 24 = 0x18
    NSIndexPath *_toIndexPath;	// 32 = 0x20
}

+ (id)insertUpdateWithItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x004000000004b876
+ (id)deleteUpdateWithItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000004b7ff
- (void).cxx_destruct;	// IMP=0x002000000004b912
@property(readonly, copy, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;
@property(readonly, copy, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
@property(readonly, copy, nonatomic) PBAppSwitcherItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;	// IMP=0x001000000004b712

@end


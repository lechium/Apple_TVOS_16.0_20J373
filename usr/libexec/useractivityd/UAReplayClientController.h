//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UAUserActivityInfo;

@interface UAReplayClientController
{
    UAUserActivityInfo *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001d02b
@property(retain) UAUserActivityInfo *item; // @synthesize item=_item;
- (id)statusString;	// IMP=0x001000000001cf98
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x001000000001cea5
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000001ce04
- (id)items;	// IMP=0x001000000001cd63
- (void)removeItem:(id)arg1;	// IMP=0x001000000001cc25
- (void)addItem:(id)arg1;	// IMP=0x001000000001cbd8
- (void)dealloc;	// IMP=0x001000000001cb6a
- (id)initWithManager:(id)arg1;	// IMP=0x001000000001cb34

@end


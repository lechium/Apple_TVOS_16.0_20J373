//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFallbackItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d5e50e
@property(retain, nonatomic) _UIStatusBarStringView *label; // @synthesize label=_label;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000d5e4e8
- (void)_create_label;	// IMP=0x0000000000d5e46b
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000d5e42c

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSString, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNameItem : _UIStatusBarItem
{
    NSString *_nameEntryKey;	// 8 = 0x8
    _UIStatusBarStringView *_nameView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d2ec6b
@property(retain, nonatomic) _UIStatusBarStringView *nameView; // @synthesize nameView=_nameView;
@property(readonly, nonatomic) NSString *nameEntryKey; // @synthesize nameEntryKey=_nameEntryKey;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000d2ea75
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000d2ea63
- (void)_create_nameView;	// IMP=0x0000000000d2ea09
- (id)dependentEntryKeys;	// IMP=0x0000000000d2e96f

@end


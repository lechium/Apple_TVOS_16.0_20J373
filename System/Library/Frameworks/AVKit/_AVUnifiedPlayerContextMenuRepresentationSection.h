//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerContextMenuRepresentationSection : NSObject
{
    _Bool _singleSelection;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    long long _calloutStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001233cb
@property(nonatomic) long long calloutStyle; // @synthesize calloutStyle=_calloutStyle;
@property(readonly, nonatomic, getter=isSingleSelection) _Bool singleSelection; // @synthesize singleSelection=_singleSelection;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)_indexOfFirstSelectedItem;	// IMP=0x000000000012337d
- (id)sectionByReplacingItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;	// IMP=0x00000000001232dd
- (id)initWithSection:(id)arg1 items:(id)arg2;	// IMP=0x000000000012321d
- (id)initWithTitle:(id)arg1 options:(unsigned long long)arg2 items:(id)arg3;	// IMP=0x0000000000123156

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplit
{
    UITableView *_picker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009dfc01
@property(readonly) UITableView *picker; // @synthesize picker=_picker;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000009dfb72
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000009dfa95
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000009dfa8d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000009dfa42
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000009dfa37
- (_Bool)shouldCache;	// IMP=0x00000000009dfa2f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009df8b3
- (id)defaultIndexPath;	// IMP=0x00000000009df893

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


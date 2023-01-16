//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectPickerTableViewController : UITableViewController
{
    WKContentView *_contentView;	// 8 = 0x8
    long long _numberOfSections;	// 16 = 0x10
    struct RetainPtr<NSMutableSet<NSNumber *>> _collapsedSections;	// 24 = 0x18
    struct RetainPtr<UIBarButtonItem> _previousButton;	// 32 = 0x20
    struct RetainPtr<UIBarButtonItem> _nextButton;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000039f6c6
- (void).cxx_destruct;	// IMP=0x000000000039f651
- (void)close:(id)arg1;	// IMP=0x000000000039f513
- (void)previous:(id)arg1;	// IMP=0x000000000039f3d3
- (void)next:(id)arg1;	// IMP=0x000000000039f290
- (id)groupHeaderFont;	// IMP=0x000000000039f187
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000039f032
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000039ec38
- (void *)optionItemAtIndexPath:(id)arg1;	// IMP=0x000000000039eb6c
- (long long)findItemIndexAt:(id)arg1;	// IMP=0x000000000039ea79
- (void)didTapSelectPickerGroupHeaderView:(id)arg1;	// IMP=0x000000000039e945
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000039e845
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000039e83d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000039e7be
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000039e74d
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000039e6f6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000039e659
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000039e648
- (long long)numberOfRowsInGroup:(long long)arg1;	// IMP=0x000000000039e5e1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000039e528
- (id)initWithView:(id)arg1;	// IMP=0x000000000039e208

@end

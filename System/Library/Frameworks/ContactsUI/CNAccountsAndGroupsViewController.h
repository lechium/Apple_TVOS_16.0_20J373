//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CNAccountsAndGroupsDataSource, NSString;
@protocol CNAccountsAndGroupsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsViewController : UITableViewController
{
    CNAccountsAndGroupsDataSource *_dataSource;	// 8 = 0x8
    _Bool _needsReload;	// 16 = 0x10
    _Bool _tableViewNeedsReloadAfterResume;	// 17 = 0x11
    id <CNAccountsAndGroupsViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004b78f
@property(nonatomic) __weak id <CNAccountsAndGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000004b737
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000004b731
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000004b554
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004b414
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000004b389
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004b2ec
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000004b29d
- (void)done:(id)arg1;	// IMP=0x000000000004b251
- (void)applicationDidResume;	// IMP=0x000000000004b240
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004b1ff
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004b079
- (void)loadView;	// IMP=0x000000000004afb2
- (void)contactStoreDidChangeWithNotification:(id)arg1;	// IMP=0x000000000004afa0
- (void)reloadData;	// IMP=0x000000000004af1d
- (void)dealloc;	// IMP=0x000000000004ae64
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000004ad06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


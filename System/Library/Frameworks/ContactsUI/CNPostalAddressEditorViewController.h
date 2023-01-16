//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CNCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorViewController : UITableViewController
{
    NSMutableArray *_propertyItems;	// 8 = 0x8
    NSString *_propertyKey;	// 16 = 0x10
    CNMutableContact *_contact;	// 24 = 0x18
    CNCardPropertyGroup *_propertyGroup;	// 32 = 0x20
    _Bool _editNames;	// 40 = 0x28
    _Bool _showDistrictField;	// 41 = 0x29
}

+ (id)cellIdentifierForClass:(Class)arg1;	// IMP=0x001000000007846c
+ (id)cellIdentifierForEditingProperty:(id)arg1;	// IMP=0x00100000000774b8
- (void).cxx_destruct;	// IMP=0x0000000000078e5c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000078dca
- (id)defaultValueForPropertyCell:(id)arg1;	// IMP=0x0000000000078dc2
- (id)storeForPropertyCell:(id)arg1;	// IMP=0x0000000000078dba
- (void)propertyCellDidChangeLayout:(id)arg1;	// IMP=0x0000000000078d03
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;	// IMP=0x0000000000078cfd
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;	// IMP=0x0000000000078929
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;	// IMP=0x00000000000788af
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x0000000000078881
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000078864
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007853c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000007851f
- (void)registerContactCellClass:(Class)arg1;	// IMP=0x000000000007849f
- (void)_startEditingFirstCell;	// IMP=0x00000000000783b3
- (void)validateContents;	// IMP=0x0000000000077cac
- (void)done:(id)arg1;	// IMP=0x00000000000778fa
- (void)cancel:(id)arg1;	// IMP=0x000000000007787a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000077839
- (void)dealloc;	// IMP=0x00000000000777bf
- (void)viewDidLoad;	// IMP=0x0000000000077593
- (void)_rebuildPropertyGroupItems:(_Bool)arg1;	// IMP=0x0000000000076d6b
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x0000000000076d5d
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;	// IMP=0x0000000000076af1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


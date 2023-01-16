//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNAvatarViewController.h"

@class CNAvatarView, CNContactStore, NSArray, NSString, PRPersonaStore;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController
{
    _Bool _threeDTouchEnabled;	// 8 = 0x8
    NSArray *_contacts;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    PRPersonaStore *_personaStore;	// 32 = 0x20
    CNAvatarView *_avatarView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000955cd
@property(nonatomic) __weak CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contacts;	// IMP=0x000000000009555d
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x00000000000954ef
- (void)setContacts:(id)arg1;	// IMP=0x000000000009544d
- (void)loadView;	// IMP=0x00000000000952d9
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000000951a1
- (id)descriptorForRequiredKeys;	// IMP=0x000000000009516c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem.h"

@class CKContainerSetupInfo, LPLinkMetadata, NSArray, NSItemProvider, NSString, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions;

__attribute__((visibility("hidden")))
@interface _SFCKShareCollaborationItem : SFCollaborationItem
{
    _Bool _isServiceManatee;	// 120 = 0x78
    _Bool _isLoadingContainerSetupInfo;	// 121 = 0x79
    CKContainerSetupInfo *_containerSetupInfo;	// 128 = 0x80
    LPLinkMetadata *_postSharelinkMetadata;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000529cd
@property(retain, nonatomic) LPLinkMetadata *postSharelinkMetadata; // @synthesize postSharelinkMetadata=_postSharelinkMetadata;
@property(nonatomic) _Bool isLoadingContainerSetupInfo; // @synthesize isLoadingContainerSetupInfo=_isLoadingContainerSetupInfo;
@property(retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // @synthesize containerSetupInfo=_containerSetupInfo;
@property(readonly, nonatomic) _Bool isServiceManatee; // @synthesize isServiceManatee=_isServiceManatee;
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
- (void)_didLoadContainerSetupInfo:(id)arg1;	// IMP=0x0000000000052838
- (void)_loadCKContainerSetupInfoIfNeeded;	// IMP=0x0000000000052630
- (void)_startLoading;	// IMP=0x00000000000525ef
@property(readonly, nonatomic) _Bool isLoading;
- (id)_defaultLoadingOptionsSummary;	// IMP=0x0000000000052525
- (_Bool)_canShowOptions;	// IMP=0x0000000000052510
- (id)initWithItemProvider:(id)arg1 activityItem:(id)arg2;	// IMP=0x0000000000052374

// Remaining properties
@property(readonly, nonatomic) id activityItem;
@property(readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property(retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool defaultCollaboration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) SFCollaborationMetadata *metadata;
@property(copy, nonatomic) NSArray *options;
@property(readonly, nonatomic) id placeholderActivityItem;
@property(readonly, copy, nonatomic) NSArray *sendCopyItems;
@property(copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end


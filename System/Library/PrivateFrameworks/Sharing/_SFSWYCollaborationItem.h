//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem.h"

@class LPLinkMetadata, NSArray, NSItemProvider, NSString, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions, SFPendingCollaboration;

__attribute__((visibility("hidden")))
@interface _SFSWYCollaborationItem : SFCollaborationItem
{
    SFPendingCollaboration *_pendingCollaboration;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000053011
@property(readonly, nonatomic) SFPendingCollaboration *pendingCollaboration; // @synthesize pendingCollaboration=_pendingCollaboration;
- (void)_loadOptionsIfNeeded;	// IMP=0x0000000000052fa4
- (id)initWithItemProvider:(id)arg1 activityItem:(id)arg2;	// IMP=0x0000000000052d9b

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
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property(readonly, nonatomic) SFCollaborationMetadata *metadata;
@property(copy, nonatomic) NSArray *options;
@property(readonly, nonatomic) id placeholderActivityItem;
@property(readonly, copy, nonatomic) NSArray *sendCopyItems;
@property(copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end


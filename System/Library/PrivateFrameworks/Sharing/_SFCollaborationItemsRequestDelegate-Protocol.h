//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class NSArray, _SFCollaborationItemsRequest;
@protocol SFCollaborationService;

@protocol _SFCollaborationItemsRequestDelegate <NSObject>
- (id <SFCollaborationService>)collaborationServiceForItemsRequest:(_SFCollaborationItemsRequest *)arg1;
- (NSArray *)collaborationItemsRequest:(_SFCollaborationItemsRequest *)arg1 resolveActivityItem:(id)arg2;
@end


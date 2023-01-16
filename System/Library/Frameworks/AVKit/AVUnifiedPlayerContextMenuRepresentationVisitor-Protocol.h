//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVUnifiedPlayerContextMenuRepresentation;
@protocol AVUnifiedPlayerContextMenuItem, AVUnifiedPlayerContextMenuSection;

@protocol AVUnifiedPlayerContextMenuRepresentationVisitor <NSObject>
- (void)representation:(AVUnifiedPlayerContextMenuRepresentation *)arg1 didVisitItem:(id <AVUnifiedPlayerContextMenuItem>)arg2;
- (void)representation:(AVUnifiedPlayerContextMenuRepresentation *)arg1 didVisitSection:(id <AVUnifiedPlayerContextMenuSection>)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, NSUndoManager, PXPhotosViewInteraction;
@protocol PXAnonymousViewController;

@protocol PXPhotosViewInteractionDelegate <NSObject>
- (NSUndoManager *)undoManagerForPhotosInteraction:(PXPhotosViewInteraction *)arg1;
- (NSObject<PXAnonymousViewController> *)presentingViewControllerForPhotosInteraction:(PXPhotosViewInteraction *)arg1;
@end


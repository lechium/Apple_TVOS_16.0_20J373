//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXUserInterfaceElementEventTracker-Protocol.h>

@class NSObject;
@protocol PXAnonymousViewController;

@protocol PXViewControllerEventTracker <PXUserInterfaceElementEventTracker>
- (void)logViewControllerDidDisappear:(NSObject<PXAnonymousViewController> *)arg1;
- (void)logViewControllerDidAppear:(NSObject<PXAnonymousViewController> *)arg1;
@end


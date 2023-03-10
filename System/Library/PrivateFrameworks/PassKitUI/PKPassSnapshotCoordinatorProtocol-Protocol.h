//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIImage;
@protocol PKPassSnapshotCoordinatableSource;

@protocol PKPassSnapshotCoordinatorProtocol <NSObject>
- (UIImage *)cardSnapshotForSource:(id <PKPassSnapshotCoordinatableSource>)arg1 withSize:(struct CGSize)arg2 completion:(void (^)(UIImage *, id <PKPassSnapshotCoordinatableSource>))arg3;
@end


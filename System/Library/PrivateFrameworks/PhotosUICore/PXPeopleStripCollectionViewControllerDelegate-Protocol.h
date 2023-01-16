//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexPath, PXPeopleStripCollectionViewController;

@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>
- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 atPoint:(struct CGPoint)arg2 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg3;
- (struct UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)sizeForItem;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI20WorkoutMediaTagsCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 25 = 0x19
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *downloadButton;	// 0 = 0x0
    MISSING_TYPE *trainerButton;	// 0 = 0x0
    MISSING_TYPE *tagsLabel;	// 0 = 0x0
    MISSING_TYPE *tagsLabelTopLayoutConstraint;	// 0 = 0x0
    MISSING_TYPE *accessibilityMediaTags;	// 1094999903 = 0x41445f5f
}

- (void).cxx_destruct;	// IMP=0x000000000013ae90
@property(nonatomic, copy) NSArray *accessibilityMediaTags;
- (void)handleDownloadButtonTapped:(id)arg1;	// IMP=0x000000000013acc0
- (void)handleTrainerButtonTapped:(id)arg1;	// IMP=0x000000000013aca0
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000013a7e0
- (void)prepareForReuse;	// IMP=0x000000000013a700
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013a6e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013a6b0
@property(nonatomic, readonly) UILabel *tagsLabel; // @synthesize tagsLabel;

@end


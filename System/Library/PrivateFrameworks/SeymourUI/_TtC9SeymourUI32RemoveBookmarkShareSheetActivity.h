//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32RemoveBookmarkShareSheetActivity : UIActivity
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *bookmarkClient;	// 48 = 0x30
    MISSING_TYPE *storefrontLocalizer;	// 88 = 0x58
    MISSING_TYPE *mediaType;	// 128 = 0x80
    MISSING_TYPE *workoutIdentifier;	// 152 = 0x98
}

+ (long long)activityCategory;	// IMP=0x004000000040d500
- (void).cxx_destruct;	// IMP=0x000000000040dec0
- (id)init;	// IMP=0x000000000040de60
- (void)performActivity;	// IMP=0x000000000040de30
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x000000000040d930
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000040d710
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end


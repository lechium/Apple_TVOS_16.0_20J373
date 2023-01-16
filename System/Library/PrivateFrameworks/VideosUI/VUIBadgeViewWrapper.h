//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUIBadgeViewWrapper : NSObject
{
    UIView *_badgeView;	// 8 = 0x8
    IKViewElement *_badgeElement;	// 16 = 0x10
    NSString *_badgeType;	// 24 = 0x18
    struct CGSize _badgeSize;	// 32 = 0x20
    struct CGRect _badgeFrame;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000026de7
@property(retain, nonatomic) NSString *badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) struct CGRect badgeFrame; // @synthesize badgeFrame=_badgeFrame;
@property(nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property(retain, nonatomic) IKViewElement *badgeElement; // @synthesize badgeElement=_badgeElement;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;

@end


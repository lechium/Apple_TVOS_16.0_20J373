//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactPhotoPreviewItem : NSObject
{
    NSURL *_previewItemURL;	// 8 = 0x8
    NSString *_previewItemTitle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022d1b
@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;

@end

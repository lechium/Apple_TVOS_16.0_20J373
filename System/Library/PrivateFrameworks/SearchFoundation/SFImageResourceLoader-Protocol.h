//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class SFImage, SFImageContext;

@protocol SFImageResourceLoader <NSObject>
- (void)loadImage:(SFImage *)arg1 context:(SFImageContext *)arg2 completionHandler:(void (^)(SFImage *, NSError *))arg3;
- (_Bool)canLoadImage:(SFImage *)arg1 context:(SFImageContext *)arg2;
@end


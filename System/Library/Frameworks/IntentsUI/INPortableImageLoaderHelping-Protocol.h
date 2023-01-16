//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUI/NSObject-Protocol.h>
#import <IntentsUI/NSSecureCoding-Protocol.h>

@class INHelperServiceAccessSpecifier, INImageBundle, NSData, NSString, NSURL;

@protocol INPortableImageLoaderHelping <NSObject, NSSecureCoding>

@optional
- (void)loadImageDataFromURL:(NSURL *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)loadImageSizeFromData:(NSData *)arg1 completion:(void (^)(struct, NSError *))arg2;
- (void)loadImageDataFromBundle:(INImageBundle *)arg1 withImageName:(NSString *)arg2 accessSpecifier:(INHelperServiceAccessSpecifier *)arg3 completion:(void (^)(NSData *, struct, long long, NSError *))arg4;
@end


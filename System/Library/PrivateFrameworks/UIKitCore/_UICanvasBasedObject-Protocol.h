//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIWindowScene;

@protocol _UICanvasBasedObject <NSObject>
@property(readonly) NSDictionary *_options;
@property(readonly) UIWindowScene *_intendedCanvas;
- (_Bool)_matchingOptions:(NSDictionary *)arg1;
- (id)_initWithCanvas:(UIWindowScene *)arg1 options:(NSDictionary *)arg2;
@end


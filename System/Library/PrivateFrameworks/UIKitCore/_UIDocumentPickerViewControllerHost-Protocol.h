//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, NSURL, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewControllerHost <NSObject>
- (void)_stitchFileCreationAtURL:(NSURL *)arg1;
- (void)_dismissWithOption:(NSString *)arg1;
- (void)_didSelectPicker;
- (void)_dismissViewController;
- (void)_didSelectURLBookmark:(NSString *)arg1;
- (void)_didSelectURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
@end


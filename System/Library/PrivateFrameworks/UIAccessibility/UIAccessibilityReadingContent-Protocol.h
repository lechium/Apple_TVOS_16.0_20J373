//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString;

@protocol UIAccessibilityReadingContent
- (NSString *)accessibilityPageContent;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (NSString *)accessibilityContentForLineNumber:(long long)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;

@optional
- (NSAttributedString *)accessibilityAttributedPageContent;
- (NSAttributedString *)accessibilityAttributedContentForLineNumber:(long long)arg1;
@end


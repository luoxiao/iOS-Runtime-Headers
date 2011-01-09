/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, OADHyperlink;



@interface OADDrawableProperties : OADProperties 
{
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    unsigned int mHasAspectRatioLocked : 1;
    unsigned int mAspectRatioLocked : 1;
    unsigned int mHasWrdInline : 1;
    unsigned int mWrdInline : 1;
}


- (BOOL)isAspectRatioLocked;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (BOOL)hasAspectRatioLocked;
- (BOOL)hasClickHyperlink;
- (BOOL)hasHoverHyperlink;
- (BOOL)isWrdInline;
- (void)setWrdInline:(BOOL)arg1;
- (BOOL)hasWrdInline;
- (BOOL)hasOrientedBounds;
- (id)initWithDefaults;
- (void)setClickHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (void)setHoverHyperlink:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setOrientedBounds:(id)arg1;
- (id)orientedBounds;
- (id)clickHyperlink;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end
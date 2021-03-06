/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCardFloatingContentView : _UIFloatingContentView <TVAuxiliaryViewSelecting, _UIFloatingContentViewDelegate> {
    UIImageView * _bgImageView;
    float  _focusedShadowAlpha;
    UIImage * _focusedShadowImage;
    UIView * _focusedShadowView;
    BOOL  _isSelected;
    id /* block */  _pressCompletionBlock;
    float  _unfocusedAlpha;
    float  _unfocusedShadowAlpha;
    UIImage * _unfocusedShadowImage;
    UIView * _unfocusedShadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float focusedShadowAlpha;
@property (nonatomic, retain) UIImage *focusedShadowImage;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ pressCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) float unfocusedShadowAlpha;
@property (nonatomic, retain) UIImage *unfocusedShadowImage;

- (void).cxx_destruct;
- (void)_setBgImageWithColor:(id)arg1 cornerRadius:(float)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned int)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (float)focusedShadowAlpha;
- (id)focusedShadowImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id /* block */)pressCompletionBlock;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionMarginsForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(float)arg3;
- (void)setFocusedShadowAlpha:(float)arg1;
- (void)setFocusedShadowImage:(id)arg1;
- (void)setPressCompletionBlock:(id /* block */)arg1;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setUnfocusedShadowAlpha:(float)arg1;
- (void)setUnfocusedShadowImage:(id)arg1;
- (float)unfocusedShadowAlpha;
- (id)unfocusedShadowImage;

@end

module Background = {
  type t;

  [@bs.module "react-native"] [@bs.scope "TouchableNativeFeedback"]
  external selectableBackground: unit => t = "SelectableBackground";

  [@bs.module "react-native"] [@bs.scope "TouchableNativeFeedback"]
  external selectableBackgroundBorderless: unit => t =
    "SelectableBackgroundBorderless";

  [@bs.module "react-native"] [@bs.scope "TouchableNativeFeedback"]
  external canUseNativeForeground: unit => t = "CanUseNativeForeground";

  [@bs.module "react-native"] [@bs.scope "TouchableNativeFeedback"]
  external ripple: (string, bool) => t = "Ripple";
};

[@react.component] [@bs.module "react-native"]
external make:
  (
    ~accessible: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityTraits: array(string)=?,
    ~delayLongPress: int=?,
    ~delayPressIn: int=?,
    ~delayPressOut: int=?,
    ~disabled: bool=?,
    ~hitSlop: Types.insets=?,
    ~onLayout: RNEvent.NativeLayoutEvent.t => unit=?,
    ~onLongPress: unit => unit=?,
    ~onPress: unit => unit=?,
    ~onPressIn: unit => unit=?,
    ~onPressOut: unit => unit=?,
    ~pressRetentionOffset: Types.insets=?,
    ~style: Style.t=?,
    ~background: Background.t=?,
    ~useForeground: bool=?,
    ~testID: string=?,
    ~children: React.element
  ) =>
  React.element =
  "TouchableNativeFeedback";
